# C Project

Welcome to the repository for my academic project involving C programming. This project is part of my coursework at BL Patil Polytechnic Khopoli, focusing on developing practical programming skills in the C language.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [Contact](#contact)

## Introduction

### Files in the Repository

1. **Bubble.c**: This file contains the implementation of the Bubble Sort algorithm. It reads an array of integers from the user, sorts the array using the Bubble Sort method, and displays the state of the array after each pass. This helps users understand how Bubble Sort works by showing the iterative process of comparing and swapping adjacent elements.

2. **selection.c**: This file implements the Selection Sort algorithm. It takes an array of integers as input from the user, sorts the array by repeatedly finding the minimum element from the unsorted part and moving it to the sorted part, and displays the array at each step. This step-by-step display aids users in grasping how Selection Sort selects and places elements.

3. **insertion.c**: This file provides the implementation of the Insertion Sort algorithm. It allows users to input an array of integers, then sorts the array by repeatedly inserting elements into their correct position, and shows the array’s state after each insertion. This visual representation helps users understand the process of building the sorted array one element at a time.

Each file includes a `display` function that is used to output the array at various stages of the sorting process, enhancing the learning experience by making the sorting algorithms more interactive and understandable.

## Features

- **Bubble Sort**: Implements the Bubble Sort algorithm, allowing the user to see the state of the array after each pass. This helps in understanding how Bubble Sort works, step-by-step.

- **Selection Sort**: Implements the Selection Sort algorithm, with the ability to view the array's state after each selection and swapping of the smallest element. This visualization aids in learning the selection process.

- **Insertion Sort**: Implements the Insertion Sort algorithm, providing a step-by-step view of the array after each insertion, which is useful for grasping how elements are sorted in place.

- **Display Function**: A common utility function used across all algorithms to display the array at different stages, enhancing the learning experience.

- **User Interaction**: The program prompts the user to input the number of elements and the elements themselves, making the sorting process interactive.

- **Modularity**: Each sorting algorithm is contained in its own file, promoting modularity and ease of understanding each sorting method separately.

- **Learning Aid**: Designed to serve as a learning aid for students and beginners in C programming, particularly in understanding different sorting techniques.


## Installation

To run this project, follow these steps:

1. Clone the repository:
   ```bash
   git clone https://github.com/Pras7616533/Academic_Project.git
   ```
2. Navigate to the project directory:
   ```bash
   cd Academic_Project/C_project
   ```
3. Compile the source code:
   ```bash
   gcc -o output file_name
   ```

## Usage

### Bubble Sort (`Bubble.c`)

1. **Compile the Program**:
   ```bash
   gcc -o bubble Bubble.c
   ```

2. **Run the Program**:
   ```bash
   ./bubble
   ```

3. **Example Usage**:
   - The program will prompt you to enter the number of elements (e.g., `5`).
   - Next, input the elements of the array (e.g., `3 1 4 5 2`).
   - The program will then display each pass of the Bubble Sort algorithm and the final sorted array.

### Selection Sort (`selection.c`)

1. **Compile the Program**:
   ```bash
   gcc -o selection selection.c
   ```

2. **Run the Program**:
   ```bash
   ./selection
   ```

3. **Example Usage**:
   - The program will ask you to enter the size of the array (e.g., `4`).
   - Enter the elements of the array (e.g., `10 3 5 1`).
   - The program will show each pass of the Selection Sort process and the sorted array.

### Insertion Sort (`insertion.c`)

1. **Compile the Program**:
   ```bash
   gcc -o insertion insertion.c
   ```

2. **Run the Program**:
   ```bash
   ./insertion
   ```

3. **Example Usage**:
   - The program will request the number of elements (e.g., `6`).
   - Provide the elements of the array (e.g., `7 4 5 2 8 1`).
   - The program will display each pass of the Insertion Sort algorithm and the final sorted array.

### Notes

- All programs read input from the standard input (console) and output the sorted array to the standard output.

## Contributing

Contributions are welcome! Please follow these steps:

1. Fork the repository.
2. Create a new branch for your feature or bug fix.
3. Commit your changes.
4. Push to your fork and submit a pull request.
## Contact

For any questions or suggestions, please reach out to [Prashant Deshmukh](mailto:prashdesh555@gmail.com).
