

# Three Sum

- **LeetCode Number:** 15
- **Difficulty:** Medium

## Problem
Given an integer array `nums`, return all unique triplets `[nums[i], nums[j], nums[k]]` such that:

`nums[i] + nums[j] + nums[k] == 0`

The solution set must not contain duplicate triplets.

## Approach
- Sort the array.
- Fix one element at a time.
- Use two pointers (`left` and `right`) to find the remaining two numbers.
- Skip duplicate elements to avoid repeated triplets.

## Time Complexity
- **O(n²)**

## Space Complexity
- **O(1)** (excluding the output array)

