# Find All Anagrams in a String

**LeetCode Number:** 438
**Difficulty:** Medium

## Problem

Given two strings `s` and `p`, return an array of all the start indices of `p`'s anagrams in `s`.

Anagrams contain the same characters with the same frequencies, but the order can be different.

## Approach

* Use a **sliding window** of size `p.length()`.
* Store the frequency of characters in `p`.
* Maintain the frequency of characters in the current window.
* Compare both frequency arrays.
* When the window moves:

  * Remove the character leaving the window.
  * Add the new character entering the window.
* If both frequency arrays are equal, store the starting index.

## Time Complexity

**O(n)**

## Space Complexity

**O(1)**

## Language

**C++**
