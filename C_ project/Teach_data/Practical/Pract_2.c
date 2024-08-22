#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    int a[20], ch, size, i, key;
    
    clrscr(); // Clears the screen in Turbo C++

    printf("\t\t\t***** Linear Search *****");

    printf("\n\t\tEnter size of the list: ");
    scanf("%d", &size);

    printf("\n\t\tEnter %d integer values:\n\t\t", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    do {
        printf("\t\tEnter element to find: ");
        scanf("%d", &key);

        for (i = 0; i < size; i++) {
            if (key == a[i]) {
                printf("\t\tElement is found at %d index\n", i + 1);
                break;
            }
        }

        if (i == size) {
            printf("\t\tGiven element is not found in the list !!!\n");
        }

        printf("\n\t\tDo you want to continue? Enter \"1\" to continue: ");
        scanf("%d", &ch);

    } while (ch == 1);

    printf("\n\t\tGoodbye...");
    getch(); // Waits for a key press in Turbo C++

    return 0;
}
