# MinMaxArray: A Java Program to Find Minimum and Maximum in an Array

This Java program takes an array as input and determines the minimum and maximum elements in it. It demonstrates the use of arrays, loops, and conditional logic in Java.

## Features

- **Dynamic Input**:
  - Users can input the size of the array and its elements.
- **Find Minimum and Maximum**:
  - The program iterates through the array to identify the smallest and largest elements.
- **User-Friendly Output**:
  - Displays both the minimum and maximum values of the array.

## How It Works

1. The program prompts the user to:
   - Enter the number of elements in the array.
   - Input the array elements.

2. The program computes:
   - The minimum value in the array using the `minArray` method.
   - The maximum value in the array using the `maxArray` method.

3. The results are displayed as output.

## File Structure

- **MinMaxArray.java**:
  - Contains the `MinMaxArray` class with methods for array input, minimum and maximum determination, and output display.

## Usage

1. Compile the program:

   ```bash
   javac MinMaxArray.java
   ```

2. Run the program:

   ```bash
   java MinMaxArray
   ```

3. Follow the prompts to input the array size and elements.

## Example

### Input:
```
Enter the number of element: 5
Enter the 5 element: 10 20 5 40 30
```

### Output:
```
The Minimum element 5
The Maximum element 40
```

## Concepts Demonstrated

- **Arrays**:
  - Used to store and process the list of elements.
- **Loops**:
  - Iterates through the array to find the minimum and maximum values.
- **Conditional Logic**:
  - Compares each element to determine the smallest and largest values.
- **Constructors**:
  - Initializes the array and inputs dynamically.

## Future Enhancements

- Add support for identifying multiple occurrences of minimum and maximum values.
- Validate user input to ensure proper data entry.
- Extend functionality to handle floating-point numbers or strings.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
