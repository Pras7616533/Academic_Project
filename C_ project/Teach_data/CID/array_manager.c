/*
   Made by Prashant Deshmukh on 16/08/2024
   Roll No: 2258
*/

#include <stdio.h>
#include <conio.h>
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
    clrscr();

    printf("\n\tEnter your name: ");
    gets(name);
    clrscr();
    setbuf(stdout, NULL);

    while(1) {
        printf("\n\t\t\t\t*** Array Menu ***\n\tEnter your choice:\n\t1. Create\n\t2. Insert\n\t3. Delete\n\t4. Display\n\t5. Exit\n\t\t==> ");
        scanf("%d", &ch);

        switch(ch) {
            case 1:
                create();
                printf("\tArray is created by %s\n", name);
                break;

            case 2:
                insert();
                printf("\tElement is inserted by %s\n", name);
                break;

            case 3:
                delet();
                printf("\tElement is deleted by %s\n", name);
                break;

            case 4:
                display();
                break;

            case 5:
                printf("\n\tThank you! %s...", name);
                exit(0);
                break;

            default:
                printf("\n\tWrong choice!!");
        }
    }
}

void create() {
    int i;
    printf("\n\t\t\t\t*** Array Creating ***\n\tEnter the value of n: ");
    scanf("%d", &num);
    printf("\tEnter %d elements: ", num);
    for (i = 0; i < num; i++) {
        scanf("%d", &a[i]);
    }
}

void insert() {
    int i, ele, ind;
    printf("\n\t\t\t*** Inserting Array Element ***\n\tEnter the value to insert: ");
    scanf("%d", &ele);
    printf("\tEnter index after which element to be inserted: ");
    scanf("%d", &ind);
    for (i = num - 1; i >= ind; i--) {
        a[i + 1] = a[i];
    }
    num++;
    a[ind] = ele;
}

void delet() {
    int i, ind;
    printf("\n\t\t\t*** Deleting Array Element ***\n\tEnter the index of the element to be deleted: ");
    scanf("%d", &ind);
    for (i = ind + 1; i <= num; i++) {
        a[i - 1] = a[i];
    }
    num--;
}

void display() {
    int i;
    printf("\n\t\t\t***** Elements in Array *****\n\t");
    for (i = 0; i < num; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
