/*

Write a program to sort a stack such that the smallest items are on the top. 
You can use an additional temporary stack, but you may not copy the elements into any other data structure (such as an array). 
The stack supports the following operations: push, pop, peek, and is Empty.

Questions for the interviewer:

1. Are the numbers in stack only int?
2. What is the maximum length of the stack allowed?
3. Can the stack be empty?
4. Can we insert negatives in the stack?

For example:
stack(bottom to top): 1234 is sorted
4321 is unsorted
 */

/*
Solution 1: Search minimum in stack, and push it to resultant stack. It would require 1 more stack to act as buffer while finding minimum.
TC: O(n^2), SC: 3n */

/* Solution2: Use just 1 more resultant stack.
TC: O(n^2), SC: 2n

Solution 3: Use aditya verma's sort stack through recursion
 */
  

  
