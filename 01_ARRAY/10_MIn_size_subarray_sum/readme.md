# LeetCode 209 - Minimum Size Subarray Sum

- **LeetCode Number:** 209
- **Difficulty:** Medium

## Problem
Given an array of positive integers `nums` and a positive integer `target`, return the **minimum length** of a contiguous subarray whose sum is greater than or equal to `target`. If no such subarray exists, return `0`.

## Approach
- Use the **Sliding Window** technique.
- Expand the window by moving the `right` pointer and keep adding elements to the current sum.
- Whenever the current sum becomes greater than or equal to the target, shrink the window from the left to find the minimum valid window.
- Update the minimum length during each valid window.
- Continue until the entire array is processed.

## Time Complexity
- **O(n)**

## Space Complexity
- **O(1)**

