# SearchArray: A Java Program to Search for an Element in an Array

This Java program searches for a specific element (key) in an array and returns its position if found. It demonstrates the use of arrays, loops, and conditional logic in Java.

## Features

- **Dynamic Input**:
  - Users can input the size of the array, its elements, and the key to search for.
- **Search Logic**:
  - The program iterates through the array to find the key and reports its position if present.
- **User-Friendly Output**:
  - Displays whether the key was found and its position (1-based index).

## How It Works

1. The program prompts the user to:
   - Enter the number of elements in the array.
   - Input the array elements.
   - Specify the key element to search for.

2. The program searches the array for the specified key.
3. The result is displayed, indicating whether the key was found and its position in the array.

## File Structure

- **SearchArray.java**:
  - Contains the `SearchArray` class with methods to handle array input, search logic, and result display.

## Usage

1. Compile the program:

   ```bash
   javac SearchArray.java
   ```

2. Run the program:

   ```bash
   java SearchArray
   ```

3. Follow the prompts to input the array size, elements, and key to search.

## Example

### Input:
```
Enter the number of element: 5
Enter the 5 element: 10 20 30 40 50
Enter the key element to find: 30
```

### Output:
```
The element 30 found at location: 3
```

### Input:
```
Enter the number of element: 4
Enter the 4 element: 5 15 25 35
Enter the key element to find: 50
```

### Output:
```
The element 50 not found
```

## Concepts Demonstrated

- **Arrays**:
  - Used to store and process the list of elements.
- **Loops**:
  - A `for` loop iterates through the array to search for the key.
- **Conditional Logic**:
  - Determines whether the key exists in the array and its position.
- **Constructors**:
  - Initializes the array and inputs dynamically.

## Future Enhancements

- Add support for multiple occurrences of the key, returning all positions.
- Implement binary search for sorted arrays to improve efficiency.
- Validate user input to ensure proper data entry.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
