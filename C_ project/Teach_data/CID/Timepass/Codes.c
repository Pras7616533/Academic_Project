#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 100

int num = 0, a[MAX];
void create();
void insert();
void delet();
void display();
void bin_search();
void sequential();
void Search();

int main() {
    char name[100];
    int ch;
//    system("clear");
    clrscr();

    printf("\n\tEnter you name: ");
//    fgets(name, sizeof(name), stdin);
    gets(name);
//    system("clear");
    clrscr();
    setbuf(stdout, NULL);
//    printf("\n\t\t\t\t*** Array Mene ***");
//    printf("\n1.create\n2.insert\n3.delete\n4.display\n5.Short\n6.Search\n0.exit\n");
    while(1)
    {
	printf("\n\t\t\t\t*** Array Mene ***");
	printf("\n\tEnter the your choice:\n\t1.create\n\t2.insert\n\t3.delete\n\t4.display\n\t5.Short\n\t6.Search\n\t0.exit\n\t\t==> ");
	scanf("%d",&ch);
	switch(ch)
	{
	    case 0:
	    printf("\n\tThank You! %s... ", name);
	    exit(0);
	    break;

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

	/*    case 5:
	    Short();
	    printf("\n\tThank You! %s... ", name);
	    exit(0);
	    break;   */

	    case 6:
	    Search();
	    printf("\n\tSearch is Completed %s... ", name);
	    break;

	    default:
	    printf("\n\tWront Choice!!");
	}
  }
}

// Create Array

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

// Insert element in array

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
    ++num;
    a[ind] = ele;
}

//Delete element form array

void delet()
{
    int i, ind;
    printf("\tEnter tne value for deleted: ");
    scanf("%d",&ind);
    for (i = ind + 1; i <= ind; i++)
    {
       a[i-1] = a[i];
    }
    --num;
}

//Display array

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

// binary search algorithm

void bin_search() {
    int i = 0, key, rebin;
    printf("Element to be searched: ");
    scanf("%d", &key);
    while (i <= num) {
        int c = (i + num) / 2;
	printf("Checking range [%d, %d], midpoint %d: %d\n", i, num, c, a[c]);
	if (a[c] == key) {
	    rebin = c;
	    break;
	}
	if (key > a[c]) {
	    i = c + 1;
	} else {
	    num = c - 1;
	}
	rebin = -1;
    }
    if (rebin == -1) {
	printf("\nNot found\n");
    } else {
	printf("\nFound at location = %d\n", rebin + 1);
    }
}

// Sequential/Linear search algorithm

void sequential() {
    int key, rebin;
    printf("Element to be searched: ");
    scanf("%d", &key);
    for (int i = 0; i < num; i++) {
	printf("Checking index %d: %d\n", i, a[i]);
	if (a[i] == key) {
	    rebin = i;
	    break;
	}
	rebin = -1;
    }
    if (rebin == -1) {
	printf("\nNot found\n");
    } else {
	printf("\nFound at location = %d\n", rebin + 1);
    }
}

// search logic has per the array if it is sorted then binary search will get call otherwise Linear search

void Search() {
    int con = 0;
    for(int i = 0; i < num; i++) {
	if(a[i] > a[i+1]) {
	    sequential();
	    con = 1;
	    break;
	}
    }
    if(con == 0) {
	bin_search();
    }
}
