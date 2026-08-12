# Minimum Window Substring

**LeetCode:** 76  
**Difficulty:** Hard  

## Problem
Find the minimum window substring in `s` that contains all characters of `t`.

## Approach
- Use **Sliding Window + Hash Map**.
- Store the frequency of characters in `t`.
- Expand the window using `right`.
- When all required characters are found, shrink the window using `left`.
- Track the smallest valid window.

## Time Complexity
**O(n)**

## Space Complexity
**O(k)**

