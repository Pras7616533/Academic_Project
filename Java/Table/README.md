# Tablefun: A Java Program for Multiplication Tables

This Java program generates and displays multiplication tables for a range of numbers specified by the user. It is a simple and interactive program that demonstrates the use of loops, classes, and encapsulation in Java.

## Features

- **Dynamic Input Range**:
   - The user specifies the starting and ending numbers for the multiplication tables.
- **Compact Output**:
   - The multiplication tables are displayed in a tabular format for easy readability.
- **Encapsulation**:
   - Logic for handling the tables is encapsulated in a separate class.

## How It Works

1. The program prompts the user to enter:
   - A starting number (`n1`).
   - An ending number (`n2`).

2. For each number in the range `[n1, n2]`, the program generates a multiplication table for values `1 to 10`.

3. The results are displayed in a neatly formatted output.

## File Structure

- **Tablefun.java**:
    - Contains the main program and the `Table` class that handles table generation and display.

## Usage

1. Compile the program:

   ```bash
   javac Tablefun.java
   ```

2. Run the program:

   ```bash
   java Tablefun
   ```

3. Follow the prompts to input the starting and ending numbers for the multiplication tables.

## Example

### Input:
```
Enter the starting number: 2
Enter the ending number: 4
```

### Output:
```
	2 * 1 = 2	3 * 1 = 3	4 * 1 = 4
	2 * 2 = 4	3 * 2 = 6	4 * 2 = 8
	2 * 3 = 6	3 * 3 = 9	4 * 3 = 12
	2 * 4 = 8	3 * 4 = 12	4 * 4 = 16
	2 * 5 = 10	3 * 5 = 15	4 * 5 = 20
	2 * 6 = 12	3 * 6 = 18	4 * 6 = 24
	2 * 7 = 14	3 * 7 = 21	4 * 7 = 28
	2 * 8 = 16	3 * 8 = 24	4 * 8 = 32
	2 * 9 = 18	3 * 9 = 27	4 * 9 = 36
	2 * 10 = 20	3 * 10 = 30	4 * 10 = 40
```

## Concepts Demonstrated

- **Classes and Objects**:
    - The `Table` class encapsulates data and methods for table generation.
- **Loops**:
    - Nested loops are used to calculate and format the multiplication tables.
- **Input Handling**:
    - The program uses `Scanner` to take user input.

## Future Enhancements

- Allow the user to specify a custom multiplication range (e.g., `1 to 20`).
- Add input validation to ensure valid and logical inputs.
- Improve formatting for better readability.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
