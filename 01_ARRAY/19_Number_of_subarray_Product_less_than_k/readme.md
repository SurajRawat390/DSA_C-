# Subarray Product Less Than K

**LeetCode:** 713
**Difficulty:** Medium

## Problem

Given an array of positive integers `nums` and an integer `k`, return the number of contiguous subarrays where the product of all elements is strictly less than `k`.

## Approach

* Use the **Sliding Window** technique.
* Maintain the product of the current window.
* Expand the window using `right`.
* If `product >= k`, shrink the window from the left.
* Add `right - left + 1` to count all valid subarrays ending at `right`.

## Time Complexity

**O(n)**

## Space Complexity

**O(1)**


