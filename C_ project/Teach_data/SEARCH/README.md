# Search Algorithms in C

This repository contains a C program that allows users to perform two types of searches: Linear Search and Binary Search. The program is interactive, providing a menu-driven interface for the user to select the desired search method.

## Program Details

- **Author**: Prashant Deshmukh
- **Date**: 16/08/2024
- **Roll No**: 2258

## Features

1. **Linear Search**: Searches for an element by checking each element in the array sequentially.
2. **Binary Search**: Efficiently searches for an element in a sorted array by dividing the search range in half.

## How to Use

1. **Clone the Repository**:

   ```bash
   git clone https://github.com/Pras7616533/Academic_Project/new/main/C_%20project/Teach_data/SEARCH.git
   ```

2. **Compile the Program**:

   Navigate to the directory containing the C source file and run:

   ```bash
   gcc -o search_algorithms search_algorithms.c
   ```

3. **Run the Program**:

   Execute the compiled program:

   ```bash
   ./search_algorithms
   ```

4. **Follow the Prompts**:

   - Select either Linear Search or Binary Search from the menu.
   - Enter the number of elements in the array.
   - Provide the elements of the array.
   - Enter the element you want to search for.
   - The program will return the location of the element if found, or a "Not found" message if the element is not in the array.

## Example Usage

```Output
1) Linear Search
2) Binary Search
3) Quit
Enter Your Choice: 1

Enter No. of elements: 5
Enter a list of 5 elements: 1 3 5 7 9
Enter the element to be searched: 5
Found at location = 3

1) Linear Search
2) Binary Search
3) Quit
Enter Your Choice: 2

Enter No. of elements: 5
Enter a sorted list of 5 elements: 1 2 3 4 5
Enter the element to be searched: 3
Found at location = 3
```

## Code Explanation

- **main()**: Provides the menu-driven interface and handles user input.
- **linsearch()**: Implements Linear Search, scanning the array from the first to the last element.
- **binsearch()**: Implements Binary Search, dividing the search range in half for each iteration.

## Contributing

Contributions are welcome! Feel free to fork this repository, make improvements, and submit a pull request.

## License

This project is open source and available under the [MIT License](LICENSE).
