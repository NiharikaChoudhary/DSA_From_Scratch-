// GFG
// https://www.geeksforgeeks.org/problems/largest-element-in-array4009/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=largest-element-in-array
// Given an array arr, the task is to find the largest element in it.
// Examples:

// Input: arr= [1, 8, 7, 56, 90]
// Output: 90
// Explanation: The largest element of given array is 90.


class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        sort(arr.begin(),arr.end());
        return arr[n-1];
        
    }
};
