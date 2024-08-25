# Practical Teach Data - Linear Search in C

This folder contains a practical implementation of the **Linear Search** algorithm using the C programming language. This code is part of the coursework at BL Patil Polytechnic Khopoli, aimed at teaching fundamental concepts of searching algorithms to students.

## Code Overview

The provided code demonstrates the following:

- **Linear Search**: The program searches for a specified element in an array by comparing it with each element in the list sequentially.
- **User Interaction**: The user is prompted to input the size of the array and the elements of the array. The program then repeatedly asks for a search key until the user decides to exit.
- **Result Display**: The program outputs whether the element was found in the list and the index at which it was found.
- **Turbo C++ Specific**: The program uses `clrscr()` to clear the screen and `getch()` to wait for a key press, which are functions specific to the Turbo C++ IDE.

### Key Features:

- **Linear Search Algorithm**: The simplest search algorithm that checks every element in the array sequentially.
- **Interactive Program**: Prompts the user for input, making it easy for beginners to understand how searching works.
- **Repeat Search**: After each search, the user is given the option to search for another element without restarting the program.

## How to Compile and Run

To compile and run the program:

1. **Using Turbo C++**:
   - Compile the code directly in the Turbo C++ IDE.
   - Run the compiled program from within the IDE.

2. **Using GCC (with minor modifications)**:
   - Remove or comment out `clrscr()` and `getch()` if you're compiling with GCC, as these functions are specific to Turbo C++.
   - Compile the program using GCC:
     ```bash
     gcc -o linear_search linear_search.c
     ```
   - Run the program:
     ```bash
     ./linear_search
     ```

## Example Usage

1. **Input**:
   - Enter the size of the array (e.g., `5`).
   - Input the elements of the array (e.g., `10 20 30 40 50`).
   - Enter the element to search for (e.g., `30`).

2. **Output**:
   - The program will indicate the position of the element if found (e.g., `Element is found at 3rd index`).
   - If the element is not found, it will display a message indicating that the element is not in the list.

## Contact

For any questions or feedback, please feel free to contact:

- **Prashant Deshmukh**
- **Email:** [Prashant Deshmukh](mailto:pras.des@gmail.com)


### Key Points:
- The README explains the purpose of the code, the algorithm used, and how to compile and run it.
- It provides instructions for both Turbo C++ and GCC, which is important since `clrscr()` and `getch()` are specific to Turbo C++.
