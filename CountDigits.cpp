// HackerRank

//  https://www.geeksforgeeks.org/problems/count-digits5716/1

// Given a number N. Count the number of digits in N which evenly divide N.

// Note :- Evenly divides means whether N is divisible by a digit i.e. leaves a remainder 0 when divided.

// Example 1:

// Input:
// N = 12
// Output:
// 2
// Explanation:
// 1, 2 both divide 12 evenly

class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int count=0;
        int num=N;
        int last=0;
        while(N>0) {
            if( N%10!=0){
                if(num%(N%10)==0){
                count++;
                }
            }
            N/=10;
        }
        return count;
    }
};
