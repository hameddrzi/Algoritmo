# Insertion Sort Algorithm

This repository contains an implementation and detailed analysis of the **Insertion Sort** algorithm, a simple and intuitive sorting algorithm that builds the sorted list one item at a time by comparing each new element with the already sorted elements.

## How Insertion Sort Works

Insertion Sort works by taking elements from an unsorted list and inserting them into their correct position in a new sorted part of the list. The sorted part grows one element at a time.

Given an array \( A \) of length \( n \):

1. Start from the second element \( i = 2 \) up to \( n \).
2. Insert \( A[i] \) into the already sorted subarray \( A[1..i-1] \).
3. Shift elements in \( A[1..i-1] \) to make space for \( A[i] \), if necessary, until \( A[i] \) finds its correct position.

### Pseudo-Code for Insertion Sort

The algorithm can be represented as follows:

```plaintext
Insertion-Sort(A)
for i ← 2 to length(A)
    j ← i
    while j > 1 and A[j-1] > A[j]
        swap A[j-1] with A[j]
        j ← j - 1
return A

T(n) = c1 * (n - 1) + c2 * (n - 1) + c3 * sum(t_i) + c4 * sum(t_i - 1) + c5 * sum(t_i - 1)

