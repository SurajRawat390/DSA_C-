# Subarray Sum Equals K

**LeetCode:** 560  
**Difficulty:** Medium  
**Language:** C++

## Problem

Given an integer array `nums` and an integer `k`, return the total number of continuous subarrays whose sum equals `k`.

## Approach

- Use **Prefix Sum + Hash Map**.
- Calculate the prefix sum while traversing the array.
- For each prefix sum, calculate `prefix_sum - k`.
- If `prefix_sum - k` exists in the hash map, add its frequency to the answer.
- Store each prefix sum and its frequency in the hash map.
- If the prefix sum itself equals `k`, increment the count.

## Time Complexity

**O(n)** average

## Space Complexity

**O(n)**