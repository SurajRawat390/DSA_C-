# LeetCode 1493 - Longest Subarray of 1's After Deleting One Element

## Difficulty

**Medium**

## Problem

Given a binary array `nums`, return the length of the longest subarray consisting of only `1`s after deleting **exactly one** element.

## Approach

* Use the **Sliding Window** technique.
* Maintain a window that contains **at most one `0`**.
* Expand the window using the `right` pointer.
* If the window contains more than one `0`, shrink it using the `left` pointer.
* Since one element must be deleted, the answer is calculated as:

  ```cpp
  right - left
  ```

  instead of `right - left + 1`.

## Time Complexity

**O(n)**

## Space Complexity

**O(1)**

