#include <stdio.h>
#include <stdlib.h>

// Define the structure for a polynomial term
struct Term {
    int coefficient;
    int exponent;
    struct Term* next;
};

typedef struct Term PolynomialTerm;

// Function to create a new term
PolynomialTerm* createTerm(int coeff, int exp) {
    PolynomialTerm* newTerm = (PolynomialTerm*)malloc(sizeof(PolynomialTerm));
    if (newTerm != NULL) {
        newTerm->coefficient = coeff;
        newTerm->exponent = exp;
        newTerm->next = NULL;
    }
    return newTerm;
}

// Function to insert a term at the end of a polynomial
void insertTerm(PolynomialTerm** poly, int coeff, int exp) {
    PolynomialTerm* newTerm = createTerm(coeff, exp);
    if (newTerm == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    if (*poly == NULL) {
        *poly = newTerm;
    } else {
        PolynomialTerm* current = *poly;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newTerm;
    }
}

// Function to add two polynomials
PolynomialTerm* addPolynomials(PolynomialTerm* poly1, PolynomialTerm* poly2) {
    PolynomialTerm* result = NULL;
    PolynomialTerm* tail = NULL;

    while (poly1 != NULL || poly2 != NULL) {
        int coeff1 = 0;
        int coeff2 = 0;
        int exp1 = -1;
        int exp2 = -1;

        if (poly1 != NULL) {
            coeff1 = poly1->coefficient;
            exp1 = poly1->exponent;
            poly1 = poly1->next;
        }

        if (poly2 != NULL) {
            coeff2 = poly2->coefficient;
            exp2 = poly2->exponent;
            poly2 = poly2->next;
        }

        int sum_coeff = coeff1 + coeff2;
        int sum_exp = exp1 >= exp2 ? exp1 : exp2; // Choose the larger exponent

        insertTerm(&result, sum_coeff, sum_exp);
        if (tail == NULL) {
            tail = result;
        }
    }

    return result;
}

// Function to print a polynomial
void printPolynomial(PolynomialTerm* poly) {
    if (poly == NULL) {
        printf("Polynomial is empty.\n");
        return;
    }

    while (poly != NULL) {
        printf("%dx^%d", poly->coefficient, poly->exponent);
        poly = poly->next;
        if (poly != NULL) {
            printf(" + ");
        }
    }
    printf("\n");
}

int main() {
    PolynomialTerm* poly1 = NULL;
    PolynomialTerm* poly2 = NULL;

    // Create and populate the first polynomial
    insertTerm(&poly1, 3, 2);
    insertTerm(&poly1, 5, 1);
    insertTerm(&poly1, 2, 0);

    // Create and populate the second polynomial
    insertTerm(&poly2, 4, 2);
    insertTerm(&poly2, 7, 1);
    insertTerm(&poly2, 1, 0);

    // Print the input polynomials
    printf("Polynomial 1: ");
    printPolynomial(poly1);
    printf("Polynomial 2: ");
    printPolynomial(poly2);

    // Add the two polynomials
    PolynomialTerm* sum = addPolynomials(poly1, poly2);

    // Print the sum
    printf("Sum: ");
    printPolynomial(sum);

    return 0;
}
