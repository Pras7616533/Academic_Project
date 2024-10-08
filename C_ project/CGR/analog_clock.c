  #include <stdio.h>
  #include <conio.h>
  #include <string.h>
  #include <math.h>
  #include <time.h>
  #include <graphics.h>
  #include <dos.h>

  /*
   * find the points at 0, 30, 60,.., 360 degrees
   * on the given circle.  x value correponds to
   * radius * cos(angle) and y value corresponds
   * to radius * sin(angle).  Numbers in the clock
   * are written using the above manipulated x and
   * y values.  And the hour needle movement
   * is based on this
   */

  void calcPoints(int radius, int midx, int midy, int x[12], int y[12]) {
        int x1, y1;

        /* 90, 270, 0, 180 degrees */
        x[0] = midx, y[0] = midy - radius;
        x[6] = midx, y[6] = midy + radius;
        x[3] = midx + radius, y[3] = midy;
        x[9] = midx - radius, y[9] = midy;

        /* 30, 150, 210, 330 degrees */
        x1 = (int) ((radius / 2) * sqrt(3));
        y1 = (radius / 2);
        x[2] = midx + x1, y[2] = midy - y1;
        x[4] = midx + x1, y[4] = midy + y1;
        x[8] = midx - x1, y[8] = midy + y1;
        x[10] = midx - x1, y[10] = midy - y1;

        /* 60, 120, 210, 300 degrees */
        x1 = radius / 2;
        y1 = (int) ((radius / 2)  * sqrt(3));
        x[1] = midx + x1, y[1] = midy - y1;
        x[5] = midx + x1, y[5] = midy + y1;
        x[7] = midx - x1, y[7] = midy + y1;
        x[11] = midx - x1, y[11] = midy - y1;

        return;
  }

  /*
   * Calculates position for minute and second needle movement
   * Each quadrant has 90 degrees.  So, we need to split each
   * quadrant into 15 parts(6 degree each) to get the minute
   * and second needle movement
   */
  void minSecCalc(int radius, int midx, int midy, int secx[60], int secy[60]) {
        int i, j = 0, x, y;
        char str[32];

        /* 15 position(min/sec - 12 to 3) in first quadrant of clock  */
        secx[j] = midx, secy[j++] = midy - radius;

        for (i = 96; i < 180; i = i + 6) {
                secx[j] = midx - (radius * cos((i * 3.14) / 180));
                secy[j++] = midy - (radius * sin((i * 3.14) / 180));
        }

        /* 15 positions(min or sec - 3 to 6) in second quadrant of clock */
        secx[j] = midx + radius, secy[j++] = midy;
        for (i = 186; i < 270; i = i + 6) {
                secx[j] = midx - (radius * cos((i * 3.14) / 180));
                secy[j++] = midy - (radius * sin((i * 3.14) / 180));
        }

        /* 15 positions(min or sec - 6 to 9) in third quadrant of clock */
        secx[j] = midx, secy[j++] = midy + radius;
        for (i = 276; i < 360; i = i + 6) {
                secx[j] = midx - (radius * cos((i * 3.14) / 180));
                secy[j++] = midy - (radius * sin((i * 3.14) / 180));
        }

        /* 15 positions(min or sec - 9 to 12) in fourth quadrant of clock */
        secx[j] = midx - radius, secy[j++] = midy;
        for (i = 6; i < 90; i = i + 6) {
                secx[j] = midx - (radius * cos((i * 3.14) / 180));
                secy[j++] = midy - (radius * sin((i * 3.14) / 180));
        }

        return;
  }

  int main() {
        /* request auto detection */
        int gdriver = DETECT, gmode, err, tmp;
        int i, j, midx, midy, radius, hr, min, sec;
        int x[12], y[12], minx[60], miny[60];
        int hrx[12], hry[12], secx[60], secy[60];
        int secx1, secy1;
        char str[256];
        time_t t1;
        struct tm *data;

        /* initialize graphic mode */
        initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");
        err = graphresult();

        if (err != grOk) {
                /* error occurred */
                printf("Graphics Error: %s",
                                grapherrormsg(err));
                return 0;
        }

        /* mid position in x and y -axis */
        midx = getmaxx() / 2;
        midy = getmaxy() / 2;

        radius = 200;

        /* position to locate numbers in clock */
        calcPoints(radius - 30, midx, midy, x, y);

        /* gets position for hour needle */
        calcPoints(radius - 90, midx, midy, hrx, hry);

        /* gets position for minute needle */
        minSecCalc(radius - 50, midx, midy, minx, miny);

        /* gets position for second needle */
        minSecCalc(radius - 70, midx, midy, secx, secy);

        while (!kbhit()) {
                setlinestyle(SOLID_LINE, 1, 3);
                settextstyle(TRIPLEX_FONT, 0, 3);

                /* draws frame of the clock */
                circle(midx, midy, radius);

                /* place the numbers  in clock */
                for (j = 0; j < 12; j++) {
                        if (j == 0) {
                                sprintf(str, "%d", 12);
                        } else {
                                sprintf(str, "%d", j);
                        }
                        settextjustify(CENTER_TEXT, CENTER_TEXT);
                        moveto(x[j], y[j]);
                        outtext(str);
                }

                /* get the current time using time() API */
                t1 = time(NULL);
                data = localtime(&t1);

                /* draw the second needle in clock */
                sec = data->tm_sec % 60;
                line(midx, midy, secx[sec], secy[sec]);

                /* draw the minute needle in clock */
                min = data->tm_min % 60;
                line(midx, midy, minx[min], miny[min]);

                /* draw the hour needle in clock */
                hr = data->tm_hour % 12;
                line(midx, midy, hrx[hr], hry[hr]);

                /* sleep for a second */
                delay(1000);
                cleardevice();
        }

        getch();

        /* deallocate memory allocated for graphic screen */
        closegraph();
        return 0;
  }
