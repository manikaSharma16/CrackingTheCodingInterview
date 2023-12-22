/* Write a method to replace all spaces in a string with'%20'
   You may assume that the string has sufficient space at the end to hold the additional characters, 
   and that you are given the "true" length of the string )

Questions for the interviewer:

1. Which characters(character set) are allowed in the strings?
2. What is the maximum length of the strings?
3. Can the strings be empty?
4. What is the minimum length of the strings?
5. Are the strings case-sensitive?
6. How is the input given to us? : As a character array
7. Do we have enough space at the end of the string to accomodate the %20s ? : Yes
8. Do you need the answer in-place?

For example:
Input: "Mr John Smith"
Output: "Mr%20John%20Smith" */

/*
Solution 1: Outplace answer
Take a new empty string, whenever non-space, append as it is. When space, append %20 and continue
TC: O(n) where n is length of string */

/* Solution2: Inplace: 
Start from the end of the vector, have a pointer there
have a pointer at the last non-space character
whenever there is a space, append %20
else append as it is
*/
