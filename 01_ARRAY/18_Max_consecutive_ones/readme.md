# Max Consecutive Ones III

**LeetCode Number:** 1004
**Difficulty:** Medium

## Problem

Given a binary array `nums` and an integer `k`, return the maximum number of consecutive `1`s after flipping at most `k` zeros.

## Approach

* Use the **sliding window** technique.
* Maintain a window using `left` and `right`.
* Count the number of zeros in the current window.
* If zeros become greater than `k`, move `left` forward and remove zeros from the window.
* Update the maximum window length using `right - left + 1`.

## Time Complexity

**O(n)**

## Space Complexity

**O(1)**

## Language

**C++**
