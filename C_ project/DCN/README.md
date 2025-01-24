# Cyclic Redundancy Check (CRC) Implementation

This project implements the **Cyclic Redundancy Check (CRC)** algorithm in C. The CRC algorithm is widely used for error detection in digital networks and storage devices. This program calculates the CRC code for given data bits and a generator polynomial and verifies data integrity during transmission and reception.

## Features
- **CRC Generation:** Compute the CRC for input data using a specified generator polynomial.
- **Data Transmission:** Append the CRC to the data bits for transmission.
- **Error Detection:** Verify the integrity of received data by recalculating the CRC.

## Code Explanation
The program works as follows:
1. Accepts the data bits and the generator polynomial as input.
2. Pads the data with zeros equal to the degree of the generator polynomial.
3. Performs bitwise XOR to compute the CRC using the generator polynomial.
4. Transmits the data along with the computed CRC.
5. Receives data and checks for errors by recomputing the CRC.

### Functions
- `void computeCRC(char data[], char generator[], char crc[])`
  - Computes the CRC for the input data using the generator polynomial.

### Main Workflow
1. Input the data bits and generator polynomial.
2. Compute and display the generated CRC.
3. Append the CRC to the original data and display the transmitted data.
4. Accept the received data and verify its integrity.
5. Detect and report any errors in the received data.

## Sample Input/Output
### Example 1: No Errors in Transmission
```
Enter the data bits: 1011001
Enter the generator polynomial bits: 1101
Generated CRC: 101
Transmitted data with CRC: 1011001101
Enter the received data: 1011001101
No error detected in received data.
```

### Example 2: Error Detected in Transmission
```
Enter the data bits: 1011001
Enter the generator polynomial bits: 1101
Generated CRC: 101
Transmitted data with CRC: 1011001101
Enter the received data: 1011001111
Error detected in received data.
```

## How to Run
1. Copy the code into a C file (e.g., `crc.c`).
2. Compile the code using a C compiler, such as GCC:
   ```
   gcc crc.c -o crc
   ```
3. Run the compiled program:
   ```
   ./crc
   ```
4. Follow the on-screen instructions to input data bits, the generator polynomial, and received data.

## Key Concepts
- **CRC:** A redundancy check used to detect errors in digital data.
- **Generator Polynomial:** A binary polynomial used for CRC computation.
- **Error Detection:** Any alteration in transmitted data results in a non-zero remainder during CRC verification.

## Limitations
- Assumes binary data and generator polynomial.
- Does not correct errors, only detects them.

## Contributing
Feel free to contribute to this project by improving the CRC implementation or adding features.

## License
This project is open-source and available under the [MIT License](LICENSE).
