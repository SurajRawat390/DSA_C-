# Move Zeroes

* **LeetCode Number:** 283
* **Difficulty:** Easy

## Problem

Move all `0`s to the end of the array while maintaining the relative order of the non-zero elements.

## Approach

* Use two pointers.
* Traverse the array with one pointer.
* Whenever a non-zero element is found, swap it with the position pointed to by the second pointer.
* Increment the second pointer after each swap.

## Time Complexity

**O(n)**

## Space Complexity

**O(1)**


