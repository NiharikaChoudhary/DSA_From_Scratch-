// Leetcode
//  https://leetcode.com/problems/minimum-difference-between-largest-and-smallest-value-in-three-moves/description/

// You are given an integer array nums.
// In one move, you can choose one element of nums and change it to any value.
// Return the minimum difference between the largest and smallest value of nums after performing at most three moves.

// Example 1:

// Input: nums = [5,3,2,4]
// Output: 0
// Explanation: We can make at most 3 moves.
// In the first move, change 2 to 3. nums becomes [5,3,3,4].
// In the second move, change 4 to 3. nums becomes [5,3,3,3].
// In the third move, change 5 to 3. nums becomes [3,3,3,3].
// After performing 3 moves, the difference between the minimum and maximum is 3 - 3 = 0.



class Solution {
public:
    int minDifference(vector<int>& nums) 
    {
        if(nums.size() <= 3) return 0;
        sort(begin(nums), end(nums));

        int  n = nums.size(),ans = INT_MAX;

        // frist three remove
        ans = min(ans, nums.back() - nums[3]);

        // last three remove
        ans = min(ans, nums[n-4] - nums[0]);

        // first 2 remove, last 1 remove
        ans = min(ans, nums[n-2] - nums[2]);

        // first 1 remove, last 2 remove
        ans = min(ans, nums[n-3] - nums[1]);

        return ans;
    }
};
