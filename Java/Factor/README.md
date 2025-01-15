# FactorFun: A Java Program to Find Factors

This Java program calculates and displays the prime factors of a given number. It demonstrates the use of loops, classes, and object-oriented programming principles in Java.

## Features

- **Prime Factorization**:
    - The program computes and displays the prime factors of the input number.
- **Dynamic Input**:
    - Users can enter any positive integer to get its prime factors.
- **Encapsulation**:
    - The program logic is encapsulated in a class for better modularity.

## How It Works

1. The program prompts the user to enter a number.
2. The number is factorized into its prime components.
3. The factors are displayed in sequence.

## File Structure

- **FactorFun.java**:
    - Contains the `FactorFun` class with the `main` method and the `number` class that handles factorization logic.

## Usage

1. Compile the program:

   ```bash
   javac FactorFun.java
   ```

2. Run the program:

   ```bash
   java FactorFun
   ```

3. Follow the prompt to enter a number.

## Example

### Input:
```
Enter The value of a number: 56
```

### Output:
```
	Factors for 56 are 2 2 2 7
```

## Concepts Demonstrated

- **Classes and Objects**:
    - The `number` class encapsulates input and factorization logic.
- **Nested Loops**:
    - Used to determine and display the prime factors.
- **Input Handling**:
    - The program uses `Scanner` for user input.

## Future Enhancements

- Validate the input to ensure only positive integers are accepted.
- Add support for displaying non-prime factors if needed.
- Format the output for better readability (e.g., factors separated by commas).

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
