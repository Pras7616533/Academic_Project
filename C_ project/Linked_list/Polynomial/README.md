# Polynomial Linked List Project

This project implements polynomial operations using a singly linked list in the C programming language. The linked list representation makes it efficient to store and manipulate polynomials, where each node represents a term in the polynomial.

## Features

- **Polynomial Representation:** Polynomials are represented as linked lists, where each node consists of a coefficient and an exponent.
- **Operations Implemented:**
  - **Addition of Polynomials**
  - **Subtraction of Polynomials**
  - **Multiplication of Polynomials**
  - **Display of Polynomials**

## File Structure

- **main.c**: Contains the main function and the program logic to perform various polynomial operations.
- **linked_list.c**: Implementation of the linked list structure and functions to create, insert, and manipulate polynomial terms.
- **linked_list.h**: Header file containing function prototypes and necessary struct definitions.
- **Makefile**: Instructions to compile the program easily.

## Usage

1. Clone the repository:

   ```bash
   git clone https://github.com/Pras7616533/Academic_Project.git
   ```

2. Navigate to the Polynomial project directory:

   ```bash
   cd Academic_Project/C_project/Linked_list/Polynomial
   ```

3. Compile the program:

   ```bash
   gcc main.c linked_list.c -o polynomial
   ```

4. Run the program:

   ```bash
   ./polynomial
   ```

## Example

### Input:
- Polynomial 1: 4x^3 + 3x^2 + 2
- Polynomial 2: 5x^2 + 2x + 1

### Output:
- Polynomial Sum: 4x^3 + 8x^2 + 2x + 3

## Future Enhancements

- Implementing division of polynomials.
- Supporting polynomial differentiation and integration.
- Improving user input handling for complex polynomials.

## License

This project is licensed under the MIT License - see the [LICENSE](../LICENSE) file for details.
