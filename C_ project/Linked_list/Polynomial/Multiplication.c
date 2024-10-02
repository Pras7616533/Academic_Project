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

// Function to insert a term into the polynomial linked list (sorted by exponent in descending order)
void insertTerm(struct Node** head, int coefficient, int exponent) {
    struct Node* newNode = createNode(coefficient, exponent);

    if (*head == NULL || (*head)->exponent < exponent) {
        newNode->next = *head;
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL && temp->next->exponent > exponent) {
            temp = temp->next;
        }
        if (temp->next != NULL && temp->next->exponent == exponent) {
            temp->next->coefficient += coefficient;
            free(newNode);
        } else {
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
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

// Function to multiply two polynomials
struct Node* multiplyPolynomials(struct Node* poly1, struct Node* poly2) {
    struct Node* result = NULL;
    struct Node* p1 = poly1;
    struct Node* p2 = poly2;

    while (p1 != NULL) {
        p2 = poly2;
        while (p2 != NULL) {
            int coeff = p1->coefficient * p2->coefficient;
            int expo = p1->exponent + p2->exponent;
            insertTerm(&result, coeff, expo);
            p2 = p2->next;
        }
        p1 = p1->next;
    }

    return result;
}

// Main function to demonstrate polynomial multiplication
int main() {
    struct Node* poly1 = NULL;
    struct Node* poly2 = NULL;
    struct Node* result = NULL;

    // Insert terms into the first polynomial (e.g., 3x^2 + 5x^1 + 6)
    insertTerm(&poly1, 3, 2);
    insertTerm(&poly1, 5, 1);
    insertTerm(&poly1, 6, 0);

    // Insert terms into the second polynomial (e.g., 6x^1 + 8)
    insertTerm(&poly2, 6, 1);
    insertTerm(&poly2, 8, 0);

    printf("Polynomial 1: ");
    displayPolynomial(poly1);

    printf("Polynomial 2: ");
    displayPolynomial(poly2);

    // Multiply the two polynomials
    result = multiplyPolynomials(poly1, poly2);

    printf("Result of multiplication: ");
    displayPolynomial(result);

    return 0;
}
