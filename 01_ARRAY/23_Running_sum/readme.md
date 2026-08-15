# Running Sum of 1d Array

**LeetCode:** 1480  
**Difficulty:** Easy  

## Problem
Given an array `nums`, return the running sum of `nums`.

The running sum at index `i` is:

`nums[0] + nums[1] + ... + nums[i]`

## Approach
- Use the input array itself to store the running sum.
- Start from index `1`.
- Add the previous element to the current element.
- Return the modified array.

## Time Complexity
- **O(n)**

## Space Complexity
- **O(1)**

## Language
- C++