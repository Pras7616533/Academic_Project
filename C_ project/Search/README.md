# Search Algorithms in C

This repository contains a C program that implements two search algorithms: sequential search and binary search. The user can choose which algorithm to use based on whether the array is sorted or not.

## Features

- **Sequential Search**: Searches for an element by checking each index of the array sequentially.
- **Binary Search**: Efficiently searches for an element in a sorted array by repeatedly dividing the search range in half.

## Program Overview

1. **Sequential Search**: Checks each element of the array until the desired element is found or the end of the array is reached.
2. **Binary Search**: Requires the array to be sorted and works by dividing the search interval in half repeatedly until the element is found or the interval is empty.

## How to Use

1. **Clone the Repository**:

   ```bash
   git clone https://github.com/your-username/your-repository.git
   ```

2. **Compile the Program**:

   Navigate to the directory containing the C source file and run:

   ```bash
   gcc -o search search.c
   ```

3. **Run the Program**:

   Execute the compiled program:

   ```bash
   ./search
   ```

4. **Follow the Prompts**:

   - Enter the number of elements in the array.
   - Specify whether the array is sorted or not.
   - Input the elements of the array.
   - Enter the element you want to search for.

   The program will display the progress of the search and the result.

## Example

```OUTPUT
No. of elements: 5
Is your array sorted?
1 for unsorted
2 for sorted
2

Enter 5 numbers: 1 3 5 7 9
Element to be searched: 5

Performing binary search...
Checking range [0, 4], midpoint 2: 5
Found at location = 3
```

## Code Explanation

- **sequential()**: Function to perform sequential search with progress output.
- **bin_search()**: Function to perform binary search with progress output.
- **main()**: Contains user interactions and handles input/output.

## Contributing

Feel free to open issues or submit pull requests if you have any improvements or fixes.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Acknowledgements

- Special thanks to online resources and communities that support C programming and algorithm development.
