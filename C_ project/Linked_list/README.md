# Singly Linked List Implementation in C

This project implements a singly linked list in C with the following operations:

- **Create**: Initialize the linked list with user-defined nodes.
- **Insert at Beginning**: Add a new node at the start of the linked list.
- **Insert at End**: Add a new node at the end of the linked list.
- **Insert at Location**: Insert a new node at a specific position in the linked list.
- **Search**: Search for a particular element in the linked list and return its position.
- **Delete**: Remove a node containing a specific value from the linked list.
- **Display**: Display all the elements in the linked list.

## Project Structure

- `linked_list.c`: This file contains the implementation of the singly linked list and its associated operations.

## How to Compile and Run

To compile and run the program using Turbo C++, follow these steps:

1. Open Turbo C++ IDE.
2. Create a new project and add the `linked_list.c` file.
3. Compile the code (`Alt + F9`) to check for errors.
4. Run the compiled code (`Ctrl + F9`) to execute the program.

## Operations in Detail

1. **Create**: 
   - The user is prompted to enter the number of nodes, followed by the data for each node.
2. **Insert at Beginning**: 
   - A new node is inserted at the start of the list, pushing the existing nodes forward.
3. **Insert at End**: 
   - A new node is added at the end of the list.
4. **Insert at Location**: 
   - A new node is inserted at a specific location as per the user input.
5. **Search**: 
   - The program searches for an element in the list and displays its position.
6. **Delete**: 
   - A node with a specified value is deleted from the list.
7. **Display**: 
   - All the elements of the list are displayed sequentially.

## Example Usage

```text
***** Singly Linked List Operations *****
1. Create
2. Insert at Beginning
3. Insert at End
4. Insert at Location
5. Search
6. Delete
7. Display
8. Exit
Enter your choice: 1

Enter the number of nodes: 3
Enter the data for node 1: 10
Enter the data for node 2: 20
Enter the data for node 3: 30

Linked list elements: 10 -> 20 -> 30 -> NULL
```
## Compatibility

- The code is written for and tested with the Turbo C++ compiler.
- It uses Turbo C++ specific functions like `clrscr()` for screen clearing and `getch()` for pausing the output.

## Author

- **Prashant Deshmukh**
  - Roll No: 2258
  - Date: 23/08/2024

## License

This project is open-source and available under the MIT License.

### Explanation:

1. **Project Description**: A brief overview of what the project does and the list of operations implemented.
2. **Project Structure**: Explains the key file involved in the project.
3. **Compilation Instructions**: Provides steps for compiling and running the program in Turbo C++.
4. **Detailed Explanation of Operations**: Describes each operation supported by the linked list.
5. **Example Usage**: Illustrates a sample session of the program's execution.
6. **Compatibility**: Notes that the program is compatible with Turbo C++.
7. **Author**: Provides credit to the author, including roll number and date.
8. **License**: Mentions that the project is open-source and licensed under the MIT License.
