# C Project - Academic Project

## Overview

This repository contains a C project developed as part of an academic exercise. The project showcases fundamental programming concepts in C, including data structures, algorithms, and file handling. The purpose of this project is to demonstrate the practical application of theoretical knowledge acquired during coursework.

## Features

- **Sorting Algorithms**: Implementation of various sorting techniques such as Bubble Sort, Selection Sort, and Insertion Sort.
- **File Handling**: Reading from and writing to files to manage data storage and retrieval.
- **Data Structures**: Usage of arrays, structures, and pointers to manage and manipulate data efficiently.
- **User Interaction**: Command-line interface that allows users to interact with the program, input data, and view results.

## File Structure

- **main.c**: The main file that contains the entry point of the program. It initializes the program and provides a menu-driven interface for the user.
- **sorting.c**: Contains the implementation of different sorting algorithms.
- **file_handling.c**: Manages the file operations, including reading from and writing to files.
- **data_structures.c**: Implements various data structures used in the project.
- **Makefile**: A makefile to compile the project easily.

## How to Compile and Run

### Prerequisites

- GCC compiler installed on your system.
- Basic understanding of the command line interface.

### Compilation

To compile the project, navigate to the project directory and use the following command:

```bash
gcc -o project main.c sorting.c file_handling.c data_structures.c
```

Alternatively, if a `Makefile` is provided, simply run:

```bash
make
```

### Running the Program

After compilation, run the program using:

```bash
./project
```

### Usage

The program is menu-driven and will prompt the user to select various operations. Follow the on-screen instructions to perform different tasks such as sorting, file operations, and data manipulation.

## Contribution

Contributions are welcome! Feel free to fork this repository, make your changes, and submit a pull request. Ensure that your code follows the established coding conventions and includes comments where necessary.

## License

This project is licensed under the MIT License. See the `LICENSE` file for more details.

## Acknowledgements

- Special thanks to the academic institution and the instructors for providing the opportunity to work on this project.
- Thanks to all contributors who helped in improving and testing the project.
