# LeetCode 643 - Maximum Average Subarray I

## Difficulty
Easy

## Problem
Given an integer array `nums` consisting of `n` elements and an integer `k`, find the contiguous subarray of length `k` that has the maximum average value and return that value.

---

## Approach
- Use the **Sliding Window** technique.
- Calculate the sum of the first `k` elements.
- Store it as the initial maximum sum.
- Slide the window one element at a time:
  - Remove the leftmost element.
  - Add the new rightmost element.
- Update the maximum sum whenever a larger window sum is found.
- Return the maximum average by dividing the maximum sum by `k`.

---

## Time Complexity
**O(n)**

- First window sum: **O(k)**
- Sliding the remaining windows: **O(n - k)**
- Overall: **O(n)**

---

## Space Complexity
**O(1)**

Only a few variables are used regardless of the input size.

---

