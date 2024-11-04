# Binary Search Algorithm

This repository contains an overview of the **Binary Search algorithm**, a highly efficient searching technique to find an element in a sorted array. The Binary Search algorithm halves the search range at each step, making it very effective with a time complexity of \(O(\log n)\).

## Key Concepts of Binary Search

The following are the key concepts behind the Binary Search algorithm:

### How Binary Search Works

1. **Definition**:
   - Binary Search is an algorithm used to locate elements in sorted arrays. Since the array is sorted, the algorithm can exclude half of the elements with each step, making it very efficient.

2. **Basic Idea**:
   - The algorithm compares the middle element of the current range with the target element:
     - **If the middle element is equal to the target**, the element is found, and the search is complete.
     - **If the target is larger than the middle element**, the target must be in the **right half** of the array.
     - **If the target is smaller than the middle element**, the target must be in the **left half** of the array.

3. **Halving the Interval**:
   - After each comparison, the search interval is halved:
     - If the target is in the left half, the interval is reduced to the left side.
     - If the target is in the right half, the interval is reduced to the right side.
   - With each iteration, the algorithm reduces the search interval by about half, which makes the search very fast.

4. **Termination Condition**:
   - The algorithm continues halving the search interval until it finds the element or reduces the interval to a single position.
   - When the interval contains only one element, it’s easy to check if it matches the target.

### Advantages of Binary Search

- **Efficiency**: Binary Search has a time complexity of \(O(\log n)\), as it reduces the search interval by half at each step. This makes it much faster than linear search \(O(n)\) for large arrays.
- **Requirement**: Binary Search only works on sorted arrays. If the array is not sorted, it must be sorted first before applying binary search.

### Summary

Binary Search is an effective method for finding elements in a sorted array. By comparing the target element to the middle of the interval and halving the interval at each step, the algorithm achieves very fast search times, especially for large arrays.
