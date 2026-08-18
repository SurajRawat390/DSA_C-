# Continuous Subarray Sum

**LeetCode:** 523  
**Difficulty:** Medium  
**Language:** C++

## Problem

Given an integer array `nums` and an integer `k`, return `true` if `nums` has a continuous subarray of at least two elements whose sum is a multiple of `k`.

## Approach

- Use **prefix sum** to calculate the sum up to each index.
- Store the **remainder** of each prefix sum when divided by `k`.
- If the same remainder appears again, the elements between those two indices have a sum divisible by `k`.
- Initialize `m[0] = -1` to handle subarrays starting from index `0`.
- Store only the **first occurrence** of each remainder to maximize the subarray length.
- Check that the subarray contains at least `2` elements.

## Time Complexity

**O(n)**

## Space Complexity

**O(k)**

## Language

C++