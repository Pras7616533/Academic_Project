# ReveseArray: A Java Program to Reverse an Array

This Java program takes an array as input and reverses its elements. It demonstrates the use of arrays, loops, and modular programming in Java.

## Features

- **Dynamic Input**:
  - Users can input the size of the array and its elements.
- **Reversal Logic**:
  - The program creates a new array with the elements in reverse order.
- **User-Friendly Output**:
  - Displays the original array and the reversed array in a clear format.

## How It Works

1. The program prompts the user to:
   - Enter the number of elements in the array.
   - Input the array elements.

2. The program reverses the array using a loop and stores the reversed elements in a new array.
3. Both the original and reversed arrays are displayed.

## File Structure

- **ReveseArray.java**:
  - Contains the `ReveseArray` class with methods for array input, reversal logic, and output display.

## Usage

1. Compile the program:

   ```bash
   javac ReveseArray.java
   ```

2. Run the program:

   ```bash
   java ReveseArray
   ```

3. Follow the prompts to input the array size and elements.

## Example

### Input:
```
Enter the number of element: 5
Enter the elements of the array: 1 2 3 4 5
```

### Output:
```
The Array is: 
1 2 3 4 5 
The Reversed Array is: 
5 4 3 2 1 
```

## Concepts Demonstrated

- **Arrays**:
  - Used to store and process the list of elements.
- **Loops**:
  - A `for` loop iterates through the array to reverse its elements.
- **Modular Design**:
  - Separate methods for input, display, and reversal enhance code readability and reusability.

## Future Enhancements

- Add in-place reversal of the array without using an additional array.
- Validate user input to ensure proper data entry.
- Extend functionality to handle multi-dimensional arrays.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
