# C Programming Practice & Algorithms 🚀

This repository contains my complete C programming journey—from fundamental mini-projects (variables, I/O, conditionals, and loops) to modular functions, recursion, 1D arrays, and 2D matrix algorithms.

---

## 📂 Part 1: Mini-Projects (Fundamentals, Logic & Modularity)

| # | Project / File (`kebab-case`) | Description | Key Concepts |
| :-: | :--- | :--- | :--- |
| **01** | `student-info.c` | Collects and displays formatted student profile information | Variables, data types, `scanf` / `printf` |
| **02** | `multipli-numbers.c` | Performs multiplication operations and prints multiplication tables | Arithmetic operators, loops |
| **03** | `market.c` | Simulates a basic market checkout system with item totals | Variables, basic I/O, arithmetic logic |
| **04** | `fruit-store.c` | Fruit market menu calculating total price based on selection and weight (kg) | `switch-case`, `float` precision |
| **05** | `student-grade-calculator.c` | Computes total marks, average, and assigns a final grade | `if / else if`, string/char handling |
| **06** | `smart-parking-calculator.c` | Calculates parking fees by vehicle type (Motorcycle `$1.00/hr`, Car `$2.50/hr`, Truck `$3.75/hr`) and duration | `switch-case`, input validation |
| **07** | `number-guessing-game.c` | Interactive console game where players guess a randomly generated number | `while` loops, random numbers (`rand`), conditionals |
| **08** | `unit-converter.c` | Modular unit converter for temperature ($^\circ\text{C} \leftrightarrow ^\circ\text{F}$) and metric distance ($\text{km} \to \text{m}$) | Custom functions, prototypes, `switch-case` |

---

## 📁 Part 2: Algorithmic Exercises (16 Core Programs)

### 1. Loops, Functions & Recursion

| # | Project / File (`kebab-case`) | Description | Key Concepts |
| :-: | :--- | :--- | :--- |
| **01** | `factorial-for-loop.c` | Computes $n!$ iteratively with negative input validation | `for` loops, `unsigned long long` |
| **02** | `factorial-function.c` | Modular factorial calculation using a custom function | Function prototypes, parameters |
| **03** | `factorial-recursion.c` | Recursive factorial calculation with base cases ($0!$ and $1!$) | Recursion, base cases |
| **04** | `power-math-pow.c` | Computes $a^b$ using the standard library `pow()` function | `<math.h>`, `double` precision |
| **05** | `power-function.c` | Iterative exponentiation using a custom function | Loops, input validation |
| **06** | `power-recursion.c` | Recursive exponentiation with negative exponent protection | Recursion, stack safety |

### 2. ASCII Patterns, Numbers & 1D Arrays

| # | Project / File (`kebab-case`) | Description | Key Concepts |
| :-: | :--- | :--- | :--- |
| **07** | `ascii-rectangle-pattern.c` | Prints an $n \times m$ rectangle using a custom character | Nested loops, `scanf` buffer handling |
| **08** | `ascii-triangle-pattern.c` | Prints a right-angled triangle of height $n$ | Nested `for` loops |
| **09** | `array-min-max-average.c` | Reads an array of size $N$, prints elements, and finds min, max, and average | 1D arrays, type casting |
| **10** | `count-integer-digits.c` | Counts the total digits in an integer (handles `0` and negative numbers) | `while` loops, integer division |

### 3. Vectors & 2D Matrices

| # | Project / File (`kebab-case`) | Description | Key Concepts |
| :-: | :--- | :--- | :--- |
| **11** | `vector-dot-product.c` | Calculates the dot product $\vec{u} \cdot \vec{v}$ of two vectors | 1D arrays, overflow prevention |
| **12** | `matrix-input-display.c` | Reads and formats a 2D matrix of dimensions $\text{rows} \times \text{cols}$ | 2D arrays, nested loops |
| **13** | `identity-matrix.c` | Generates and displays an $n \times n$ identity matrix | Ternary operator, diagonal logic |
| **14** | `matrix-transpose.c` | Computes the transpose $M^T$ by swapping rows and columns | Index manipulation |
| **15** | `scalar-matrix-multiplication.c` | Multiplies every element of a matrix by a scalar $k$ | 2D matrix traversal |
| **16** | `matrix-addition.c` | Computes the element-wise sum $A + B$ of two matrices | Multi-matrix operations |

---

## ⚙️ How to Compile & Run

Ensure you have **GCC** installed on your machine.

### Standard Compilation
```bash
gcc filename.c -o program
./program
```

### Programs Using `<math.h>` (e.g., `power-math-pow.c`)
Link the math library using `-lm` on Linux/macOS:
```bash
gcc power-math-pow.c -lm -o program
./program
```

---

## 🛠️ Tools & Standards
* **Language:** C (C99 / C11)
* **IDE:** Visual Studio Code
* **Compiler:** GCC
* **Naming Convention:** `kebab-case` for clean, consistent repository organization

## 📄 License
This project is open-source and available for educational and learning purposes.
