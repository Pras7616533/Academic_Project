# Array Management in C

This repository contains a C program that allows users to perform basic array operations like creating an array, inserting elements, deleting elements, and displaying the array. The program is interactive and prompts the user for input through a simple menu.

## Program Details

- **Author**: Prashant Deshmukh
- **Date**: 16/08/2024
- **Roll No**: 2258

## Features

1. **Create**: Initialize an array with user-defined elements.
2. **Insert**: Add a new element at a specified position in the array.
3. **Delete**: Remove an element from a specified position in the array.
4. **Display**: Show the current elements in the array.

## How to Use

1. **Clone the Repository**:

   ```bash
   git clone https://github.com/Pras7616533/Academic_Project/new/main/C_%20project/Teach_data/CID.git
   ```

2. **Compile the Program**:

   Navigate to the directory containing the C source file and run:

   ```bash
   gcc -o array_manager array_manager.c
   ```

3. **Run the Program**:

   Execute the compiled program:

   ```bash
   ./array_manager
   ```

4. **Follow the Prompts**:

   - Enter your name.
   - Choose an option from the menu:
     - `1` to create an array.
     - `2` to insert an element.
     - `3` to delete an element.
     - `4` to display the array.
     - `5` to exit the program.

## Example

```Output
Enter your name: Prashant Deshmukh

            *** Array Mene ***
Enter the your choice:
    1.create
    2.insert
    3.delete
    4.display
    5.exit
        ==> 1
Enter the value of n: 5
Enter 5 element: 1 2 3 4 5
Array is Created by Prashant Deshmukh

Enter the your choice:
    1.create
    2.insert
    3.delete
    4.display
    5.exit
        ==> 4

            ***** Elements in Array *****.
        1 2 3 4 5
```

## Code Explanation

- **create()**: Prompts the user to enter the number of elements and then the elements themselves to initialize the array.
- **insert()**: Allows the user to insert a new element at a specific index in the array.
- **delet()**: Removes the element at a specified index from the array.
- **display()**: Outputs the current elements in the array.

## Contributing

Contributions are welcome! Feel free to fork this repository, make your changes, and submit a pull request.

## License

This project is open source and available under the [MIT License](LICENSE).
