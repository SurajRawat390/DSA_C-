# Remove Duplicates from Sorted Array

- **LeetCode Number:** 26
- **Difficulty:** Easy

## Problem
Given a sorted array, remove the duplicates in-place such that each unique element appears only once. Return the number of unique elements.

## Approach
- Use two pointers.
- Keep `insert_index` to track the position of the next unique element.
- Traverse the array and compare the current element with the previous one.
- If they are different, place the current element at `insert_index` and increment it.

## Time Complexity
- **O(n)**

## Space Complexity
- **O(1)**

