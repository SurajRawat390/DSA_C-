# Maximum Length Subarray with Equal 0s and 1s

**LeetCode Number:** —  
**Difficulty:** Medium

## Problem
Find the maximum length of a contiguous subarray containing an equal number of `0`s and `1`s.

## Approach
- Convert `0` into `-1` conceptually while calculating the prefix sum.
- Treat `1` as `+1`.
- If the same prefix sum occurs again, the elements between those indices have an equal number of `0`s and `1`s.
- Store the first occurrence of each prefix sum in an `unordered_map`.
- Initialize `m[0] = -1` to handle subarrays starting from index `0`.
- Keep updating the maximum length.

## Time Complexity
`O(n)` average

## Space Complexity
`O(n)`

## Language
C++