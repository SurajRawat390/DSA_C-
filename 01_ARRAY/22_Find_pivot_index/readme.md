# Pivot Index

**LeetCode:** 724  
**Difficulty:** Easy  

## Problem

Given an integer array `nums`, find the **pivot index** where the sum of all elements to the left is equal to the sum of all elements to the right.

If no pivot index exists, return `-1`.

## Approach

- Calculate the total sum of the array.
- Store it in `right_sum`.
- Initialize `left_sum = 0`.
- Traverse the array.
- Subtract the current element from `right_sum`.
- Compare `left_sum` and `right_sum`.
- If they are equal, return the current index.
- Add the current element to `left_sum`.
- If no pivot is found, return `-1`.

## Time Complexity

**O(n)**

## Space Complexity

**O(1)**

## Language

**C++**