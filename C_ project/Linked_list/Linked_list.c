/*
   Made by Prashant Deshmukh
   Roll No: 2258
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Node structure for singly linked list
struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void create();
void insert_at_beginning();
void insert_at_end();
void insert_at_location();
void search();
void delete_node();
void display();

int main() {
    int choice;
    
    clrscr();
    
    while (1) {
        printf("\n\n***** Singly Linked List Operations *****\n");
        printf("1. Create\n");
        printf("2. Insert at Beginning\n");
        printf("3. Insert at End\n");
        printf("4. Insert at Location\n");
        printf("5. Search\n");
        printf("6. Delete\n");
        printf("7. Display\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                create();
                break;
            case 2:
                insert_at_beginning();
                break;
            case 3:
                insert_at_end();
                break;
            case 4:
                insert_at_location();
                break;
            case 5:
                search();
                break;
            case 6:
                delete_node();
                break;
            case 7:
                display();
                break;
            case 8:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    
    getch();
    return 0;
}

void create() {
    int n, data, i;
    struct Node *new_node, *temp;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        new_node = (struct Node*)malloc(sizeof(struct Node));

        printf("Enter the data for node %d: ", i + 1);
        scanf("%d", &data);

        new_node->data = data;
        new_node->next = NULL;

        if (head == NULL) {
            head = new_node;
        } else {
            temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = new_node;
        }
    }
}

void insert_at_beginning() {
    int data;
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    printf("Enter the data to insert at the beginning: ");
    scanf("%d", &data);

    new_node->data = data;
    new_node->next = head;
    head = new_node;
}

void insert_at_end() {
    int data;
    struct Node *new_node, *temp;

    new_node = (struct Node*)malloc(sizeof(struct Node));

    printf("Enter the data to insert at the end: ");
    scanf("%d", &data);

    new_node->data = data;
    new_node->next = NULL;

    if (head == NULL) {
        head = new_node;
    } else {
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

void insert_at_location() {
    int data, pos, i;
    struct Node *new_node, *temp;

    new_node = (struct Node*)malloc(sizeof(struct Node));

    printf("Enter the position to insert at: ");
    scanf("%d", &pos);

    printf("Enter the data to insert: ");
    scanf("%d", &data);

    new_node->data = data;
    new_node->next = NULL;

    if (pos == 1) {
        new_node->next = head;
        head = new_node;
    } else {
        temp = head;
        for (i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }
        if (temp != NULL) {
            new_node->next = temp->next;
            temp->next = new_node;
        } else {
            printf("Position out of bounds!\n");
        }
    }
}

void search() {
    int key, pos = 1;
    struct Node *temp = head;

    printf("Enter the data to search: ");
    scanf("%d", &key);

    while (temp != NULL) {
        if (temp->data == key) {
            printf("Element %d found at position %d\n", key, pos);
            return;
        }
        temp = temp->next;
        pos++;
    }

    printf("Element %d not found in the list.\n", key);
}

void delete_node() {
    int key;
    struct Node *temp = head, *prev = NULL;

    printf("Enter the data to delete: ");
    scanf("%d", &key);

    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    if (head->data == key) {
        temp = head;
        head = head->next;
        free(temp);
        printf("Element %d deleted.\n", key);
        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Element %d not found.\n", key);
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Element %d deleted.\n", key);
}

void display() {
    struct Node *temp = head;

    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    printf("Linked list elements: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
