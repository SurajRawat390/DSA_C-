# LeetCode 904 - Fruit Into Baskets

## Difficulty

**Medium**

## Problem

You are given an integer array `fruits`, where each element represents a type of fruit on a tree. You have two baskets, and each basket can hold only one type of fruit. Starting from any tree, collect exactly one fruit from each tree while moving to the right. Return the maximum number of fruits you can collect.

## Approach

* Use the **Sliding Window** technique with an **unordered_map** to keep track of the frequency of fruit types in the current window.
* Expand the window by moving the `right` pointer.
* If the window contains more than **2 distinct fruit types**, shrink it from the left until only 2 types remain.
* Update the maximum window size during each valid window.

## Time Complexity

**O(n)**

* Each element is added to and removed from the window at most once.

## Space Complexity

**O(1)**

* The unordered_map stores at most **2 fruit types** (temporarily 3 before shrinking), so the space usage is constant.

