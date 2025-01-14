# Table Fun

### Key Features of the Code:
1. **Dynamic Input for Range:**
   - The program prompts the user to input the starting and ending numbers for generating multiplication tables.

2. **Multiplication Table Logic:**
   - The program iterates over the range of numbers (`n1` to `n2`) and computes the multiplication for values from 1 to 10.

3. **Encapsulation:**
   - The table logic is encapsulated in the `Table` class, with a constructor to initialize the range and a method `disTable` to display the tables.

### Example Input/Output:

**Input:**
```
Enter the starting number 2
Enter the ending number 4
```

**Output:**
```
	2 * 1 = 2	3 * 1 = 3	4 * 1 = 4
	2 * 2 = 4	3 * 2 = 6	4 * 2 = 8
	2 * 3 = 6	3 * 3 = 9	4 * 3 = 12
	2 * 4 = 8	3 * 4 = 12	4 * 4 = 16
	2 * 5 = 10	3 * 5 = 15	4 * 5 = 20
	2 * 6 = 12	3 * 6 = 18	4 * 6 = 24
	2 * 7 = 14	3 * 7 = 21	4 * 7 = 28
	2 * 8 = 16	3 * 8 = 24	4 * 8 = 32
	2 * 9 = 18	3 * 9 = 27	4 * 9 = 36
	2 * 10 = 20	3 * 10 = 30	4 * 10 = 40
```

### Potential Enhancements:
1. **Input Validation:**
   - Ensure the user enters valid integers for `n1` and `n2`.
   - Check if `n1` is less than or equal to `n2`.

2. **Customizable Multiplication Range:**
   - Allow the user to specify the range for multiplication (e.g., `1 to 20` instead of `1 to 10`).

3. **Improved Formatting:**
   - Add alignment for better readability of the multiplication tables.

4. **Error Handling:**
   - Handle invalid input gracefully (e.g., non-numeric input).

