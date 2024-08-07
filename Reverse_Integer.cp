// Leetcode
// https://leetcode.com/problems/reverse-integer/description/ 


// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

// Example 1:

// Input: x = -123
// Output: -321

  
class Solution {
public:
    int reverse(int x) {
        int num=0;
        while(x){
            if (num>INT_MAX/10 || num<INT_MIN/10) return 0;
            num= num*10 + x%10;
            x/=10;
        }
        return num;
    }
};
