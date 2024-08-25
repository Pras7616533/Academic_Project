#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

void main() {
    char str[30][20], search[30];
    int i, flag = 0, n, ch;
    clrscr();
    setbuf(stdout, NULL);
    printf("\n\t\t\t***** Linear Search for string *****");
    printf("\n\t\tEnter element of strings: ");
    scanf("%d", &n);
    // Input array of strings
    printf("\n\t\tEnter %d strings:\n",n);
    for(i = 0; i < n; i++) {
	printf("\t\t%d. ",i+1);
	scanf("%s",str[i]);
    }
    do
    {
    // Input string to search
    printf("\n\t\tEnter string to search: ");
    scanf("%s",search);
    setbuf(stdout, NULL);
    // Linear search
    for(i = 0; i < 5; i++) {
	if(strcmp(str[i], search) == 0) {
	    flag = 1;
	    break;
	}
    }

    // Display result
    if(flag == 1) {
	printf("\n\t\tString found at position %d", i + 1);
    } else {
	printf("\n\t\tStrig not found");
    }
    printf("\n\t\tDo you want to continue?\n\t\tEnter \"1\" to continue: ");
    scanf("%d", &ch);
    }while(ch == 1);
    printf("\n\t\tBy... Prashant deshmukh ");
    getch();
    exit(0);
}
