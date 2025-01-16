# Reverse: A Java Program to Reverse a Number

This Java program reverses a given number. It demonstrates the use of loops, classes, and encapsulation in Java.

## Features

- **Dynamic Input**:
    - Users can input any positive integer, and the program will compute its reverse.
- **Efficient Reversal Logic**:
    - The program uses a loop to extract and reverse the digits of the input number.
- **Encapsulation**:
    - The program logic is modularized within a class for better readability and reusability.

## How It Works

1. The program prompts the user to enter a number.
2. The digits of the number are extracted and reversed using a loop.
3. The reversed number is displayed as output.

## File Structure

- **Reverse.java**:
    - Contains the `Reverse` class with the `main` method and the `numberRev` class that handles the reversal logic.

## Usage

1. Compile the program:

   ```bash
   javac Reverse.java
   ```

2. Run the program:

   ```bash
   java Reverse
   ```

3. Follow the prompt to enter a number.

## Example

### Input:
```
Enter the number: 12345
```

### Output:
```
Reverse number is 54321
```

## Concepts Demonstrated

- **Classes and Objects**:
    - The `numberRev` class encapsulates input and reversal logic.
- **Loops**:
    - A `for` loop is used to extract and reverse the digits of the number.
- **Input Handling**:
    - The program uses `Scanner` for dynamic user input.

## Future Enhancements

- Validate the input to ensure only positive integers are entered.
- Handle edge cases, such as negative numbers or zero, gracefully.
- Extend the program to reverse numbers with leading zeroes while preserving them (e.g., `00123` → `32100`).

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
