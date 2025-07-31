# EXPERIMENT - 6 - LOOPS
# Aim: To study and implement C++ decision-making statements in C++.

## Apparatus: VS Code or Programiz Online Compiler

## Theory:

**Iteration control statements** are the engines of repetition in C++. They enable your programs to execute a block of code multiple times, either for a fixed count or until a specific condition is met. This capability is vital for tasks ranging from validating user input and processing data to creating intricate visual patterns.

### Types of Iterative Constructs:

1.  **`for` Loop**: Ideal when you know precisely how many times you need to repeat an action. It's concise and combines initialization, condition checking, and iteration advancement into a single line.

    ```cpp
    for (int i = 0; i < 5; i++) {
        // This code block will execute 5 times
    }
    ```

2.  **`while` Loop**: Perfect for scenarios where the number of repetitions isn't known beforehand. The loop continues as long as a specified condition remains true.

    ```cpp
    while (condition) {
        // This code executes repeatedly until 'condition' becomes false
    }
    ```

3.  **`do-while` Loop**: A variation of the `while` loop that guarantees the code block will execute at least once, even if the condition is initially false. The condition is checked after the first execution.

    ```cpp
    do {
        // This code executes at least once, then checks 'condition'
    } while (condition);
    ```

### Practical Applications in this Project:

* **Pattern Printing**: Programs focused on generating patterns (2 through 7) heavily rely on **nested `for` loops**. The outer loop typically manages the rows, while the inner loop handles the elements within each row (like spaces or stars).
* **Data Manipulation**: Tasks such as reversing digits in a number or validating password input often utilize **`while` loops**. These loops efficiently process data character by character or digit by digit until a specific state is achieved.

### Why This Matters:

Mastering iteration control is not just about writing efficient code; it's about developing a **logical and algorithmic mindset**. It lays the groundwork for:

* **Algorithmic Thinking**: Understanding how to break down complex problems into repeatable steps.
* **Debugging Skills**: Learning to trace the execution flow of loops to identify and fix errors, especially in nested structures.
* **Foundation for Advanced Concepts**: Providing a stepping stone for more complex topics like array manipulation, matrix operations, and sophisticated algorithm design.

## Programs: 

### 1. Right-Aligned Star Triangle

---

**Description:** Generates a triangle pattern where stars are aligned to the right, increasing in number with each row.

**Algorithm:**
1.  Determine the number of rows for the triangle (e.g., `n`).
2.  Use an outer `for` loop to iterate from `1` to `n` (for each row).
3.  Inside the outer loop, use an inner `for` loop to print spaces. The number of spaces should decrease with each row (`n - current_row`).
4.  Following the spaces, use another inner `for` loop to print stars. The number of stars should increase with each row (`current_row`).
5.  After printing spaces and stars for a row, move to the next line.

**Output:**
```
        * 
      * * 
    * * * 
  * * * * 
* * * * * 
```

2. Left-Aligned Star Triangle

Description: Creates a triangle pattern with stars aligned to the left, growing with each subsequent row.

Algorithm:
1. Determine the number of rows (e.g., n).

2. Use an outer for loop to iterate from 1 to n (for each row).

3. Inside the outer loop, use an inner for loop to print stars. The number of stars should increase with each row (current_row).

4. After printing stars for a row, move to the next line.

**Output:**
```
* 
* * 
* * * 
* * * * 
* * * * * 
```

### 3. Inverted Star Pyramid

---

**Description:** Displays a pyramid of stars that is inverted and centered.

**Algorithm:**
1.  Determine the number of rows (e.g., `n`).
2.  Use an outer `for` loop to iterate from `n` down to `1` (for each row, starting with the widest).
3.  Inside the outer loop, use an inner `for` loop to print leading spaces. The number of spaces should increase with each row (`n - current_row`).
4.  Following the spaces, use another inner `for` loop to print stars. The number of stars should decrease with each row (`2 * current_row - 1`).
5.  After printing spaces and stars for a row, move to the next line.

**Output:**
```
*********
 *******
  *****
   ***
    *
```

---

### 4. Inverted Left-Aligned Star Triangle

---

**Description:** Generates a left-aligned triangle pattern where the number of stars decreases with each row.

**Algorithm:**
1.  Determine the number of rows (e.g., `n`).
2.  Use an outer `for` loop to iterate from `n` down to `1` (for each row).
3.  Inside the outer loop, use an inner `for` loop to print stars. The number of stars should decrease with each row (`current_row`).
4.  After printing stars for a row, move to the next line.
```
* * * * * 
* * * * 
* * * 
* * 
* 
```

5. Inverted Right-Aligned Star Triangle

Description: Produces an inverted triangle pattern with stars aligned to the right.

Algorithm:
1. Determine the number of rows (e.g., n).

2. Use an outer for loop to iterate from n down to 1 (for each row).

3. Inside the outer loop, use an inner for loop to print leading spaces. The number of spaces should increase with each row (n - current_row).
4. Following the spaces, use another inner for loop to print stars. The number of stars should decrease with each row (current_row).
5. After printing spaces and stars for a row, move to the next line.

**Output:**
```
* * * * * 
  * * * * 
    * * * 
      * * 
        * 
```
### 6. Pyramid Star Pattern

---

**Description:** Creates a classic centered pyramid pattern using stars.

**Algorithm:**
1.  Determine the number of rows (e.g., `n`).
2.  Use an outer `for` loop to iterate from `1` to `n` (for each row).
3.  Inside the outer loop, use an inner `for` loop to print leading spaces. The number of spaces should decrease with each row (`n - current_row`).
4.  Following the spaces, use another inner `for` loop to print stars. The number of stars should increase with each row (`2 * current_row - 1`).
5.  After printing spaces and stars for a row, move to the next line.


**Output:**
```
    *
   ***
  *****
 *******
*********
```

---

### 7. Reversing Digits in a Number

---

**Description:** Takes a four-digit integer input and displays its digits in reverse order.

**Sample Output:**
```
Enter the last four digits of your PRN number: 3006
Reversed digits: 6003
```

---

### 8. Floyd's Triangle

---

**Description:** Generates Floyd's Triangle, a right-angled triangle of natural numbers, where each row contains consecutive numbers.


**Sample Output:**
```
Enter the number of rows for Floyd's Triangle: 5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
```

---

### 9. Robust Password Verification

---

**Description:** Implements a password validation system that enforces security criteria and requires re-entry for confirmation. The password must contain at least one uppercase letter, one digit, and one special character.

**Sample Output:**

Set password: @Hello123
Password is set successfully.

Enter password: @Hello123
System Unlocked


---
