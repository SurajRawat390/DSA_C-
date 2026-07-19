# Two Sum

**LeetCode:** 1  
**Difficulty:** Easy

## Problem
Given an array of integers `nums` and a target, return the indices of the two numbers whose sum equals the target.

## Approach
- Use a hash map to store each number and its index.
- For each element, check if its complement (`target - current`) exists.
- If found, return the two indices.

## Time Complexity
- **O(n)**

## Space Complexity
- **O(n)**


