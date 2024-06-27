// Leetcode
//  https://leetcode.com/problems/palindrome-number/description/

// Given an integer x, return true if x is a palindrome, and false otherwise.

// Example 1:

// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.

class Solution {
public:
    bool isPalindrome(int x) {
        long long num=x;
        long long last =0;
        if(x<0){
            return false;
        }
        while(x>0){
            last = last*10 + x%10;
            x=x/10;
        }
        return num==last;
    }
};
