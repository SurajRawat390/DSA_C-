# 🔀 LeetCode 567: Permutation in String

- **LeetCode Number:** 567
- **Difficulty:** Medium

---

## 📌 Problem

Given two strings `s1` and `s2`, return `true` if `s2` contains a permutation of `s1`, otherwise return `false`.

A permutation is a rearrangement of all the characters of a string.

---

## 💡 Approach

- Store the frequency of all characters in `s1`.
- Traverse `s2` and consider every substring (window) of length equal to `s1`.
- For each window:
  - Calculate its character frequency.
  - Compare it with the frequency array of `s1`.
- If both frequency arrays are identical, return `true`.
- If no matching window is found, return `false`.

---

## ⏱️ Time Complexity

- **O((N - M + 1) × M)** ≈ **O(N × M)**

Where:
- `N` = Length of `s2`
- `M` = Length of `s1`

---

## 💾 Space Complexity

- **O(1)**

Uses two frequency arrays of size 26 (constant space).

---

