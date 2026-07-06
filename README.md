# Advanced Calculator in C

A menu-driven calculator written in C as a practice project while learning the C programming language.

This project started as a simple calculator and was gradually expanded into an advanced console application with multiple features, better code organization, reusable functions, and a scientific calculator.

---

## Features

### Basic Calculator
- Addition
- Subtraction
- Multiplication
- Division
- Modulus
- Power

### Scientific Calculator
- Square Root
- Absolute Value
- Percentage Calculation
- Natural Logarithm
- Trigonometric Functions
  - Sine
  - Cosine
  - Tangent
  - Cotangent
  - Secant
  - Cosecant

### Other Features
- Menu-driven interface
- Previous result continuation
- Operation counter
- Division by zero handling
- Modulus by zero handling
- Invalid input checking
- Exit confirmation
- Uses degrees for trigonometric calculations

---

## Concepts Used

- Variables
- Functions
- Conditional Statements
- Switch Case
- Loops
- Standard Libraries
- Modular Programming
- Error Handling
- Mathematical Functions (`math.h`)
- Function Reusability

---

## Libraries Used

- `stdio.h`
- `math.h`
- `string.h`

---

## Project Structure

The program is divided into separate functions for better readability.

- Menu Functions
- Basic Calculator Functions
- Scientific Calculator Functions
- Trigonometric Functions
- Utility Functions

---

## How to Compile

Using GCC:

```bash
gcc Calculator.c -o calculator -lm
```

> **Note:** `-lm` is required to link the math library.

---

## How to Run

### Windows

```bash
calculator.exe
```

### Linux / macOS

```bash
./calculator
```

---

## Screenshots

Screenshots of the calculator interface are available in the `screenshots` folder.

---

## Future Improvements

Some features I plan to add in future versions:

- Memory Functions (M+, M-, MR, MC)
- Calculation History
- Better Input Validation
- Scientific Constants
- Factorial
- Permutations & Combinations
- Exponential Functions
- Binary / Decimal / Hexadecimal Conversion
- Matrix Operations
- Improved UI and Code Refactoring

---

## What I Learned

This project helped me practice:

- Breaking a large program into smaller functions
- Writing reusable code
- Handling mathematical operations
- Debugging larger C programs
- Organizing console applications
- Structuring projects for GitHub

---

## Author

**Krish Kumar**

This project was created as part of my journey of learning the C programming language and improving my problem-solving skills.
