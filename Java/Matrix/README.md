# Matrix Input and Display Program in Java

This Java program allows users to input and display the elements of a matrix. It demonstrates the use of 2D arrays, loops, and object-oriented programming principles in Java.

## Features

- **Matrix Input**:
  - Users can input the dimensions (rows and columns) and elements of a matrix.
- **Matrix Display**:
  - The program neatly prints the matrix in a tabular format.
- **Modular Design**:
  - The functionality is divided into methods for input and display, enhancing code reusability.

## How It Works

1. The program prompts the user to enter the dimensions of the matrix (rows `n` and columns `m`).
2. The user inputs the elements of the matrix.
3. The matrix is displayed in a formatted grid layout.

## File Structure

- **Matrix.java**:
  - Contains the `Matrix` class with methods to handle matrix input and display, and the `main` method to execute the program.

## Usage

1. Compile the program:

   ```bash
   javac Matrix.java
   ```

2. Run the program:

   ```bash
   java Matrix
   ```

3. Follow the prompts to enter the matrix dimensions and elements.

## Example

### Input:
```
Enter the n: 2
Enter the m: 3
Enter the element 2 × 3 of matrix: 1 2 3 4 5 6
```

### Output:
```
The element of 2 × 3 are:
	1 2 3 
	4 5 6 
```

## Concepts Demonstrated

- **2D Arrays**:
  - Used to store and manipulate matrix data.
- **Loops**:
  - Nested loops handle matrix input and output.
- **Object-Oriented Design**:
  - The program is modularized into methods for better structure and clarity.

## Future Enhancements

- Add support for matrix operations such as addition, subtraction, and multiplication.
- Validate user input to ensure dimensions and elements are integers.
- Extend functionality to handle square matrices (e.g., calculating determinants or transposes).

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
