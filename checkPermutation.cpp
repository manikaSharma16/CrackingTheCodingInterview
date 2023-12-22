/* Leetcode: https://leetcode.com/problems/valid-anagram/description/ */

/* Given two strings, write a method to decide if one is a permutation of the other.

Questions for the interviewer:

1. Which characters are allowed in the strings? : alphabets only
2. What is the maximum length of the strings?
3. Can the strings be empty?
4. What is the minimum length of the strings?
5. Will the strings be of the same size always? : Yes
6. Are the strings case-sensitive? : Yes
7. Is white space significant? : Yes
8. 

For example:
"God" and "dog": No
" g o d " and " d o g ": Yes
" g o d    " and " d o g ": No
"abcd" and "badc": Yes */

/*
Solution 1: Sort and iterate
TC: O(nlogn) where n is length of string */

/* Solution2: Hashmap: Check if two strings have identical character count */

