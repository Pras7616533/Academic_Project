/*
   Made by Prashant Deshmukh no 16/08/2024
   roll no : 2258
*/

#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>
#define MAX 100

int num = 0, a[MAX];
void create();
void insert();
void delet();
void display();

int main() {
    char name[100];
    int ch;
    system("clear");
//    clrscr();

    printf("\n\tEnter you name: ");
    fgets(name, sizeof(name), stdin);
//    gets(name);
    system("clear");
//    clrscr();
    setbuf(stdout, NULL);
    printf("\n\t\t\t\t*** Array Mene ***");
  //  printf("\n1.create\n2.insert\n3.delete\n4.display\n5.exit\n");
    while(1)
    {
        printf("\n\tEnter the your choice:\n\t1.create\n\t2.insert\n\t3.delete\n\t4.display\n\t5.exit\n\t\t==> ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            create();
            printf("\tArray is Created by %s \n", name);
            break;

            case 2:
            insert();
            printf("\tElement is Inserted by %s\n", name);
            break;

            case 3:
            delet();
            printf("\tElement is Deleted by %s\n", name);
            break;

            case 4:
            display();
            break;

            case 5:
            printf("\n\tThank You! %s... ", name);
            exit(0);
            break;

            default:
            printf("\n\tWront Choice!!");
        }
    }
}

void create()
{
    int i;
    printf("\tEnter tne value of n: ");
    scanf("%d",&num);
    printf("\tEnter %d element: ", num);
    for (i = 0; i < num; i++)
    {
        scanf("%d",&a[i]);
    }
}

void insert()
{
    int i, ele, ind;
    printf("\tEnter tne value for insert: ");
    scanf("%d",&ele);
    printf("\tEnter index after which element to be inserted: ");
    scanf("%d",&ind);
    for (i = num-1; i >= ind; i--)
    {
       a[i+1] = a[i];
    }
    num++;
    a[ind] = ele;
}

void delet()
{
    int i, ind;
    printf("\tEnter tne value for deleted: ");
    scanf("%d",&ind);
    for (i = ind + 1; i <= ind; i++)
    {
       a[i-1] = a[i];
    }
    num--;
}

void display()
{
    int i;
    printf("\n\t\t\t\t***** Elements in Array *****.\n\t\t");
    for (i = 0; i < num; i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n\n");
}
