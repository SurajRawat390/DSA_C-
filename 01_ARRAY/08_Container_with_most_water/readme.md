# LeetCode 11: Container With Most Water

## Difficulty
Medium

## Problem
Given an integer array `height` where each element represents the height of a vertical line, find two lines that together with the x-axis form a container that can hold the maximum amount of water.

Return the maximum amount of water the container can store.

## Approach
- Initialize two pointers:
  - `left` at the beginning of the array.
  - `right` at the end of the array.
- Calculate the area formed by the two pointers using:
  - `Area = min(height[left], height[right]) × (right - left)`
- Update the maximum area found.
- Move the pointer with the smaller height inward since it is the limiting factor for the current area.
- Continue until both pointers meet.

## Time Complexity
**O(n)**

Each pointer moves at most `n` times.

## Space Complexity
**O(1)**

No extra space is used.

