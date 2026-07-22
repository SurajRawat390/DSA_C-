# Four Sum

- **LeetCode Number:** 18
- **Difficulty:** Medium

## Problem
Given an integer array `nums` and an integer `target`, return all unique quadruplets `[nums[a], nums[b], nums[c], nums[d]]` such that:

`nums[a] + nums[b] + nums[c] + nums[d] == target`

The solution set must not contain duplicate quadruplets.

## Approach
- Sort the array.
- Fix the first two elements using nested loops.
- Use two pointers (`left` and `right`) to find the remaining two elements.
- Skip duplicate values to avoid repeated quadruplets.

## Time Complexity
- **O(n³)**

## Space Complexity
- **O(1)** (excluding the output array)

