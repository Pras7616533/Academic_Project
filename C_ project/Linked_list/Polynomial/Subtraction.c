#include <stdio.h>
#include <stdlib.h>

// Define a structure for the linked list node (representing a term in the polynomial)
struct Node {
    int coefficient;
    int exponent;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int coefficient, int exponent) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coefficient = coefficient;
    newNode->exponent = exponent;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a term into the polynomial linked list
void insertTerm(struct Node** head, int coefficient, int exponent) {
    struct Node* newNode = createNode(coefficient, exponent);
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to display the polynomial
void displayPolynomial(struct Node* head) {
    if (head == NULL) {
        printf("0\n");
        return;
    }

    struct Node* temp = head;
    while (temp != NULL) {
        printf("%dx^%d", temp->coefficient, temp->exponent);
        if (temp->next != NULL && temp->next->coefficient >= 0) {
            printf(" + ");
        }
        temp = temp->next;
    }
    printf("\n");
}

// Function to subtract two polynomials
struct Node* subtractPolynomials(struct Node* poly1, struct Node* poly2) {
    struct Node* result = NULL;
    struct Node* p1 = poly1;
    struct Node* p2 = poly2;

    while (p1 != NULL && p2 != NULL) {
        if (p1->exponent > p2->exponent) {
            insertTerm(&result, p1->coefficient, p1->exponent);
            p1 = p1->next;
        } else if (p1->exponent < p2->exponent) {
            insertTerm(&result, -p2->coefficient, p2->exponent);
            p2 = p2->next;
        } else {
            int coeffDiff = p1->coefficient - p2->coefficient;
            if (coeffDiff != 0) {
                insertTerm(&result, coeffDiff, p1->exponent);
            }
            p1 = p1->next;
            p2 = p2->next;
        }
    }

    // If poly1 has remaining terms
    while (p1 != NULL) {
        insertTerm(&result, p1->coefficient, p1->exponent);
        p1 = p1->next;
    }

    // If poly2 has remaining terms
    while (p2 != NULL) {
        insertTerm(&result, -p2->coefficient, p2->exponent);
        p2 = p2->next;
    }

    return result;
}

// Main function to demonstrate polynomial subtraction
int main() {
    struct Node* poly1 = NULL;
    struct Node* poly2 = NULL;
    struct Node* result = NULL;

    // Insert terms into the first polynomial (e.g., 5x^3 + 4x^1 + 2)
    insertTerm(&poly1, 5, 3);
    insertTerm(&poly1, 4, 1);
    insertTerm(&poly1, 2, 0);

    // Insert terms into the second polynomial (e.g., 3x^3 + 2x^2 + 1)
    insertTerm(&poly2, 3, 3);
    insertTerm(&poly2, 2, 2);
    insertTerm(&poly2, 1, 0);

    printf("Polynomial 1: ");
    displayPolynomial(poly1);

    printf("Polynomial 2: ");
    displayPolynomial(poly2);

    // Subtract the two polynomials
    result = subtractPolynomials(poly1, poly2);

    printf("Result of subtraction: ");
    displayPolynomial(result);

    return 0;
}
