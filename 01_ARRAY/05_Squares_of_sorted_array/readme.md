# Squares of a Sorted Array

- **LeetCode Number:** 977
- **Difficulty:** Easy

## Problem
Given a sorted integer array `nums`, return an array of the squares of each number sorted in non-decreasing order.

## Approach
- Use two pointers:
  - One at the beginning.
  - One at the end.
- Compare the absolute values of both elements.
- Place the larger square at the end of the answer array.
- Move the corresponding pointer inward.
- Repeat until all elements are processed.

## Time Complexity
- **O(n)**

## Space Complexity
- **O(n)**

