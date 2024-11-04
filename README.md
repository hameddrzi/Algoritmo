# 3n + 1 Problem (Collatz Conjecture)

This project explores the **3n + 1 problem**, also known as the **Collatz conjecture**. The goal is to generate a sequence starting from any positive integer \(a_0\), following a set of rules, until reaching the value 1.

## Problem Definition

Given a positive integer `a_0`, generate the sequence by applying these rules:

- If the current number is even, the next number is half of the current number:
  - `a_n = a_(n-1) / 2`
  
- If the current number is odd, the next number is three times the current number plus one:
  - `a_n = 3 * a_(n-1) + 1`

The sequence continues until it reaches 1.

### Example

Starting with `a_0 = 15`, we generate the following sequence:


### Collatz Conjecture

The **Collatz conjecture** states that, regardless of the initial value of `a_0` (as long as it's a positive integer), the sequence will always eventually reach the value 1.

### Project Structure

This project includes:

- **Source Code**: A script that takes a positive integer `a_0` as input and generates the 3n + 1 sequence.
- **Tests**: Basic tests to validate that the sequence reaches 1 for various starting values.

### Usage

1. Clone this repository to your local machine.
2. Run the main script (e.g., `collatz.py`) and input a positive integer when prompted.
3. The program will output the 3n + 1 sequence until it reaches 1.

### Example Usage

```shell
in c language
Enter a positive integer: 15
Sequence: 15, 46, 23, 70, 35, 106, 53, 160, 80, 40, 20, 10, 5, 16, 8, 4, 2, 1
