#include <stdio.h>
#include <stdlib.h>

// Node structure to represent each term in the polynomial
struct Node {
    int coeff;
    int exp;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int coeff, int exp) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coeff = coeff;
    newNode->exp = exp;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new term in the polynomial linked list
struct Node* insertTerm(struct Node* poly, int coeff, int exp) {
    struct Node* newNode = createNode(coeff, exp);
    if (!poly || exp > poly->exp) {
        newNode->next = poly;
        return newNode;
    } else {
        struct Node* temp = poly;
        while (temp->next && temp->next->exp > exp) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    return poly;
}

// Function to add two polynomials
struct Node* addPolynomials(struct Node* poly1, struct Node* poly2) {
    struct Node* result = NULL;
    
    while (poly1 && poly2) {
        if (poly1->exp > poly2->exp) {
            result = insertTerm(result, poly1->coeff, poly1->exp);
            poly1 = poly1->next;
        } else if (poly1->exp < poly2->exp) {
            result = insertTerm(result, poly2->coeff, poly2->exp);
            poly2 = poly2->next;
        } else {
            result = insertTerm(result, poly1->coeff + poly2->coeff, poly1->exp);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }
    
    // Add remaining terms of poly1 or poly2
    while (poly1) {
        result = insertTerm(result, poly1->coeff, poly1->exp);
        poly1 = poly1->next;
    }
    
    while (poly2) {
        result = insertTerm(result, poly2->coeff, poly2->exp);
        poly2 = poly2->next;
    }
    
    return result;
}

// Function to display the polynomial
void displayPolynomial(struct Node* poly) {
    if (!poly) {
        printf("0\n");
        return;
    }
    while (poly) {
        printf("%dx^%d", poly->coeff, poly->exp);
        poly = poly->next;
        if (poly)
            printf(" + ");
    }
    printf("\n");
}

int main() {
    struct Node* poly1 = NULL;
    struct Node* poly2 = NULL;
    struct Node* result = NULL;
    
    // Polynomial 1: 3x^2 + 5x^1 + 6
    poly1 = insertTerm(poly1, 3, 2);
    poly1 = insertTerm(poly1, 5, 1);
    poly1 = insertTerm(poly1, 6, 0);
    
    // Polynomial 2: 7x^3 + 2x^1 + 4
    poly2 = insertTerm(poly2, 7, 3);
    poly2 = insertTerm(poly2, 2, 1);
    poly2 = insertTerm(poly2, 4, 0);
    
    // Adding two polynomials
    result = addPolynomials(poly1, poly2);
    
    printf("Polynomial 1: ");
    displayPolynomial(poly1);
    
    printf("Polynomial 2: ");
    displayPolynomial(poly2);
    
    printf("Sum of the polynomials: ");
    displayPolynomial(result);

    return 0;
}
