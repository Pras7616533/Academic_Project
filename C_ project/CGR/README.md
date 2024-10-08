# Practical Teach Data - Analog Clock in C

This folder contains a practical implementation of an **Analog Clock** using C programming and graphics libraries. The program visually displays an analog clock with hour, minute, and second hands that move according to the current system time. This example is part of the coursework at BL Patil Polytechnic Khopoli, designed to teach students about graphics programming, trigonometric calculations, and real-time system interactions in C.

## Code Overview

The program consists of the following key components:

1. **Header Inclusions**
2. **Function Definitions**
   - `calcPoints`
   - `minSecCalc`
3. **`main` Function**
   - Graphics Initialization
   - Clock Drawing Logic
   - Time Retrieval and Hand Movement
   - Cleanup

Let's delve into each part in detail.

---

## 1. Header Inclusions

```c
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <graphics.h>
#include <dos.h>
```

### Explanation:

- **Standard Libraries:**
  - `stdio.h`: Standard Input/Output functions (e.g., `printf`, `scanf`).
  - `string.h`: String handling functions (e.g., `strcmp`, `strcpy`).
  - `math.h`: Mathematical functions (e.g., `cos`, `sin`, `sqrt`).
  - `time.h`: Time and date functions (e.g., `time`, `localtime`).

- **Turbo C++ Specific Libraries:**
  - `conio.h`: Console I/O functions (e.g., `clrscr()`, `getch()`).
  - `graphics.h`: Graphics functions (e.g., `initgraph()`, `circle()`, `line()`).
  - `dos.h`: DOS-specific functions (e.g., `delay()`).

**Note:** This program is designed for the Turbo C++ environment, which is specific to DOS. Modern compilers like GCC may require modifications, such as removing Turbo-specific functions (`clrscr()`, `getch()`, etc.) or using alternative libraries for graphics.

---

## 2. Function Definitions

### a. `calcPoints`

```c
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
```

#### Purpose:

Calculates the (x, y) coordinates for the 12 hour marks on the clock face based on the provided radius and center coordinates (`midx`, `midy`).

#### Step-by-Step Explanation:

1. **Parameters:**
   - `radius`: Radius of the clock face.
   - `midx`, `midy`: Center coordinates of the clock.
   - `x[12]`, `y[12]`: Arrays to store the x and y coordinates of the 12 hour marks.

2. **Calculating Key Angles:**
   - **90°, 270°, 0°, 180°:**
     - Directly calculates positions for 12, 6, 3, and 9 o'clock.
     - Example:
       - `x[0] = midx` and `y[0] = midy - radius` sets the 12 o'clock position.

   - **30°, 150°, 210°, 330°:**
     - Uses trigonometric relationships to calculate positions at these angles.
     - `x1 = (radius / 2) * sqrt(3)` and `y1 = radius / 2` derive the offset for these positions.
     - Assigns coordinates to 1:30, 2:30, 7:30, and 11:30 positions.

   - **60°, 120°, 240°, 300°:**
     - Similarly calculates positions using adjusted trigonometric values.
     - `x1 = radius / 2` and `y1 = (radius / 2) * sqrt(3)` derive offsets.
     - Assigns coordinates to 2:00, 4:00, 8:00, and 10:00 positions.

3. **Storing Coordinates:**
   - Populates the `x` and `y` arrays with calculated positions for each hour mark.

---

### b. `minSecCalc`

```c
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
```

#### Purpose:

Calculates the (x, y) coordinates for each minute and second mark on the clock face. Each minute and second corresponds to 6 degrees (360° / 60).

#### Step-by-Step Explanation:

1. **Parameters:**
   - `radius`: Radius for minute and second marks.
   - `midx`, `midy`: Center coordinates of the clock.
   - `secx[60]`, `secy[60]`: Arrays to store the x and y coordinates for each minute/second mark.

2. **Initialization:**
   - Initializes the starting index `j = 0`.
   - Begins by setting the top (12 o'clock) position.

3. **Calculating Positions for Each Quadrant:**
   - **First Quadrant (12 to 3):**
     - Adds the 12 o'clock position.
     - Iterates from 96° to 180°, incrementing by 6° each step.
     - Calculates positions using `cos` and `sin` functions and stores them in `secx` and `secy`.

   - **Second Quadrant (3 to 6):**
     - Adds the 3 o'clock position.
     - Iterates from 186° to 270°, incrementing by 6° each step.
     - Calculates positions similarly.

   - **Third Quadrant (6 to 9):**
     - Adds the 6 o'clock position.
     - Iterates from 276° to 360°, incrementing by 6° each step.
     - Calculates positions similarly.

   - **Fourth Quadrant (9 to 12):**
     - Adds the 9 o'clock position.
     - Iterates from 6° to 90°, incrementing by 6° each step.
     - Calculates positions similarly.

4. **Trigonometric Calculations:**
   - Converts degrees to radians by multiplying with `3.14/180`.
   - Uses `cos` and `sin` to find the x and y offsets from the center.
   - Adjusts the x-coordinate by subtracting the cosine component and y-coordinate by subtracting the sine component to align with the graphics coordinate system.

5. **Storing Coordinates:**
   - Populates the `secx` and `secy` arrays with calculated positions for each minute and second mark.

---

## 3. `main` Function

```c
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
    initgraph(&gdriver, &gmode, "C:/TURBOC3/BGI");
    err = graphresult();

    if (err != grOk) {
        /* error occurred */
        printf("Graphics Error: %s", grapherrormsg(err));
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
```

### Purpose:

The `main` function initializes the graphics mode, calculates positions for clock components, and enters a loop to continuously draw and update the clock based on the current system time.

### Step-by-Step Explanation:

1. **Variable Declarations:**

   - **Graphics Variables:**
     - `gdriver`, `gmode`: Graphics driver and mode.
     - `err`: Error code for graphics initialization.
   
   - **Clock Components:**
     - `midx`, `midy`: Center coordinates of the clock.
     - `radius`: Radius of the clock face.
     - `x[12]`, `y[12]`: Coordinates for the 12 hour marks.
     - `hrx[12]`, `hry[12]`: Coordinates for the hour hand positions.
     - `minx[60]`, `miny[60]`: Coordinates for the minute hand positions.
     - `secx[60]`, `secy[60]`: Coordinates for the second hand positions.
   
   - **Time Variables:**
     - `hr`, `min`, `sec`: Current hour, minute, and second.
     - `t1`: Current time.
     - `data`: Struct containing broken-down time.

2. **Graphics Initialization:**

   ```c
   initgraph(&gdriver, &gmode, "C:/TURBOC3/BGI");
   err = graphresult();
   ```

   - Initializes the graphics system with automatic detection of the graphics driver.
   - The BGI (Borland Graphics Interface) path is specified (`"C:/TURBOC3/BGI"`).

3. **Error Handling:**

   ```c
   if (err != grOk) {
       printf("Graphics Error: %s", grapherrormsg(err));
       return 0;
   }
   ```

   - Checks if graphics initialization was successful.
   - If an error occurs, prints the error message and exits the program.

4. **Calculating Center and Radius:**

   ```c
   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   radius = 200;
   ```

   - `getmaxx()`, `getmaxy()`: Retrieve the maximum x and y coordinates of the graphics screen.
   - Sets the center of the clock (`midx`, `midy`) to the middle of the screen.
   - Sets the radius of the clock face to 200 pixels.

5. **Calculating Positions for Clock Components:**

   ```c
   calcPoints(radius - 30, midx, midy, x, y);
   calcPoints(radius - 90, midx, midy, hrx, hry);
   minSecCalc(radius - 50, midx, midy, minx, miny);
   minSecCalc(radius - 70, midx, midy, secx, secy);
   ```

   - **Hour Marks (`x`, `y`):** Positioned slightly inside the clock face (`radius - 30`).
   - **Hour Hand Positions (`hrx`, `hry`):** Positioned closer to the center (`radius - 90`).
   - **Minute Hand Positions (`minx`, `miny`):** Positioned midway (`radius - 50`).
   - **Second Hand Positions (`secx`, `secy`):** Positioned further out (`radius - 70`).

6. **Main Loop:**

   ```c
   while (!kbhit()) {
       // Drawing and updating logic
   }
   ```

   - The loop runs continuously until a key is pressed (`kbhit()` detects a key press).

7. **Drawing the Clock Frame:**

   ```c
   setlinestyle(SOLID_LINE, 1, 3);
   settextstyle(TRIPLEX_FONT, 0, 3);
   circle(midx, midy, radius);
   ```

   - Sets the line style for drawing.
   - Sets the text style for displaying numbers.
   - Draws the outer circle representing the clock face.

8. **Placing Hour Numbers:**

   ```c
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
   ```

   - Iterates through each hour mark.
   - Replaces the first position (`j == 0`) with `12` instead of `0`.
   - Positions and displays each hour number at the calculated (x, y) coordinates.

9. **Retrieving Current Time:**

   ```c
   t1 = time(NULL);
   data = localtime(&t1);
   ```

   - Retrieves the current system time.
   - Breaks down the time into its components (hour, minute, second).

10. **Drawing the Second Hand:**

    ```c
    sec = data->tm_sec % 60;
    line(midx, midy, secx[sec], secy[sec]);
    ```

    - Calculates the current second.
    - Draws a line from the center to the corresponding second mark position.

11. **Drawing the Minute Hand:**

    ```c
    min = data->tm_min % 60;
    line(midx, midy, minx[min], miny[min]);
    ```

    - Calculates the current minute.
    - Draws a line from the center to the corresponding minute mark position.

12. **Drawing the Hour Hand:**

    ```c
    hr = data->tm_hour % 12;
    line(midx, midy, hrx[hr], hry[hr]);
    ```

    - Calculates the current hour in 12-hour format.
    - Draws a line from the center to the corresponding hour mark position.

13. **Updating the Clock:**

    ```c
    delay(1000);
    cleardevice();
    ```

    - Waits for 1 second (`1000` milliseconds).
    - Clears the graphics screen to redraw the clock with updated time.

14. **Exiting the Program:**

    ```c
    getch();
    closegraph();
    return 0;
    ```

    - Waits for a final key press before exiting.
    - Closes the graphics mode and deallocates resources.

---

## Additional Notes

- **Graphics Library:**
  - The program uses the BGI (Borland Graphics Interface) for graphics operations, which is specific to Turbo C++. Modern environments may require alternative graphics libraries like SDL or OpenGL.

- **Trigonometric Calculations:**
  - Positions are calculated using `cos` and `sin` functions, converting degrees to radians (`angle * π / 180`).

- **Coordinate System:**
  - The graphics coordinate system has the origin (0,0) at the top-left corner. Positive x extends to the right, and positive y extends downward.

- **Modularity:**
  - Functions `calcPoints` and `minSecCalc` are used to modularize the code, making it easier to manage and understand.

- **Real-Time Updates:**
  - The clock updates every second by retrieving the current system time and redrawing the clock hands accordingly.

---

## How to Compile and Run

### Using Turbo C++:

1. **Open Turbo C++ IDE:**
   - Ensure that Turbo C++ is installed and properly configured on your system.

2. **Load the Source Code:**
   - Open the `.c` file containing the clock program.

3. **Compile the Program:**
   - Use the IDE's compile option to compile the code.

4. **Run the Program:**
   - Execute the compiled program within the IDE.

### Using GCC (with Modifications):

**Note:** GCC does not support Turbo C++ specific functions like `conio.h`, `graphics.h`, `clrscr()`, `getch()`, etc. To compile with GCC, consider the following steps:

1. **Remove Turbo C++ Specific Functions:**
   - Comment out or remove `#include <conio.h>`, `clrscr()`, `getch()`, and any other Turbo C++ specific functions.

2. **Use an Alternative Graphics Library:**
   - Replace BGI graphics with a modern library like SDL or OpenGL.
   - Adjust the graphics initialization and drawing code accordingly.

3. **Compile the Program:**
   - Use GCC to compile the modified code.
   - Example:
     ```bash
     gcc -o analog_clock analog_clock.c -lm -lSDL2
     ```
   - Ensure that the necessary libraries are installed and linked.

4. **Run the Program:**
   - Execute the compiled program from the terminal.
     ```bash
     ./analog_clock
     ```

---

## Contact

For any questions or feedback, please feel free to contact:

- **Prashant Deshmukh**
- **Email:** [Prashant Deshmukh](mailto:pras.des@gmail.com)

---

## Summary

This C program demonstrates how to create a functional analog clock using graphics programming. By leveraging trigonometric calculations and real-time system time retrieval, the program dynamically updates the clock hands to reflect the current time. This practical example serves as an excellent educational tool for understanding graphics in C, algorithm implementation, and real-time application development
