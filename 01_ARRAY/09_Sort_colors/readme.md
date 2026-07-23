# LeetCode 75: Sort Colors

## Difficulty
Medium

## Problem
Given an array `nums` containing `0`s, `1`s, and `2`s, sort the array in-place so that objects of the same color are adjacent.

You must solve the problem without using the library's sort function.

## Approach
- Use the **Dutch National Flag Algorithm** with three pointers:
  - `low` → Points to the position where the next `0` should be placed.
  - `mid` → Traverses the array.
  - `high` → Points to the position where the next `2` should be placed.
- If `nums[mid] == 0`, swap it with `nums[low]` and increment both `low` and `mid`.
- If `nums[mid] == 1`, simply increment `mid`.
- If `nums[mid] == 2`, swap it with `nums[high]` and decrement `high` without incrementing `mid`.
- Continue until `mid > high`.

## Time Complexity
**O(n)**

Each element is processed at most once.

## Space Complexity
**O(1)**

No extra space is used.

