# Leap Year Checker: A Java Program to Determine Leap Years

This Java program determines whether a given year is a leap year or not. It uses the leap year rules and demonstrates basic input handling and conditional logic in Java.

## Features

- **Leap Year Calculation**:
  - The program checks if a year is a leap year based on the following rules:
    - A year is a leap year if it is divisible by 4 but not divisible by 100.
    - A year is also a leap year if it is divisible by 400.
- **Dynamic Input**:
  - Users can enter any year for evaluation.
- **Simple Logic**:
  - The program uses conditional statements to evaluate leap year rules.

## How It Works

1. The program prompts the user to enter a year.
2. The input is read and parsed as an integer.
3. The program evaluates the input year using leap year conditions.
4. A message is displayed indicating whether the year is a leap year or not.

## File Structure

- **Leap.java**:
  - Contains the program logic for evaluating leap years.

## Usage

1. Compile the program:

   ```bash
   javac Leap.java
   ```

2. Run the program:

   ```bash
   java Leap
   ```

3. Follow the prompt to enter a year.

## Example

### Input:
```
Enter the year: 2024
```

### Output:
```
The year 2024 is a leap year
```

### Input:
```
Enter the year: 1900
```

### Output:
```
The year 1900 is not a leap year
```

## Concepts Demonstrated

- **Input Handling**:
  - The program uses `DataInputStream` to read user input.
- **Conditional Logic**:
  - Leap year determination is implemented using logical conditions.
- **Exception Handling**:
  - The program includes a try-catch block to handle potential input errors.

## Future Enhancements

- Replace `DataInputStream` with `Scanner` for more modern input handling.
- Provide error messages for invalid inputs (e.g., non-integer values).
- Extend the program to handle input in a loop for multiple year checks.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
