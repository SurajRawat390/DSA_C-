# LeetCode 3 - Longest Substring Without Repeating Characters

## Difficulty
Medium

## Problem
Given a string `s`, find the length of the longest substring without repeating characters.

---

## Approach
- Use the **Sliding Window** technique with two pointers (`left` and `right`).
- Maintain an array `lastIndex` of size `256` to store the last occurrence of each character.
- Traverse the string using the `right` pointer.
- If the current character has already appeared in the current window, move the `left` pointer to:
  ```cpp
  left = max(left, lastIndex[s[right]] + 1);
  ```
- Update the last occurrence of the current character.
- Calculate the current window length and update the maximum length.

---

## Algorithm
1. Initialize `left = 0` and `maxLen = 0`.
2. Create a `lastIndex` array of size `256` and initialize all values to `-1`.
3. Traverse the string using the `right` pointer.
4. If the current character has been seen before, move `left` to the maximum of its current position and one position after the previous occurrence.
5. Update the last occurrence of the current character.
6. Update the maximum window length.
7. Return `maxLen`.

---

## Time Complexity
**O(n)**

- Each character is visited at most once.
- Overall Time Complexity: **O(n)**

---

## Space Complexity
**O(1)**

- Uses a fixed-size array of 256 elements.
- Space remains constant regardless of the input size.

---

## Key Points
- Uses the **Variable Size Sliding Window** technique.
- `lastIndex` provides **O(1)** lookup for previous character positions.
- `left = max(left, lastIndex[ch] + 1)` ensures the window never moves backward.
- The window always contains **unique characters**.

---

