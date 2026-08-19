# Product of Array Except Self

**LeetCode Number:** 238  
**Difficulty:** Medium

## Problem
Return an array where each element is the product of all elements in the input array except itself.

## Approach
- Use a **prefix product** to store the product of elements on the left.
- Use a **suffix product** to store the product of elements on the right.
- Multiply prefix and suffix products to get the final answer.

## Time Complexity
O(n)

## Space Complexity
O(1) extra space

## Language
C++