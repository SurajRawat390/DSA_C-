# Range Sum Query - Immutable

**LeetCode:** 303  
**Difficulty:** Easy  

## Problem
Given an integer array `nums`, find the sum of elements between the given `left` and `right` indices (inclusive).

## Approach
- Use **Prefix Sum Array**.
- Store the cumulative sum of elements in `prefix`.
- If `left == 0`, return `prefix[right]`.
- Otherwise, calculate the range sum as:
  `prefix[right] - prefix[left - 1]`.
- This allows each query to be answered in constant time.

## Time Complexity
**O(n)** for preprocessing  
**O(1)** for each query

## Space Complexity
**O(n)**