// GFG
// https://www.geeksforgeeks.org/problems/introduction-to-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=introduction-to-linked-list

// Geek loves linked list data structure. Given an array of integer arr of size n, Geek wants to construct the linked list from arr
// Construct the linked list from arr and return the head of the linked list.

// Example 1:

// Input:
// n = 5
// arr = [1,2,3,4,5]
// Output:
// 1 2 3 4 5
// Explanation: Linked list for the given array will be 1->2->3->4->5.


class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        // code here
        Node* Node1= new Node(arr[0]);
        Node* head= Node1;
        Node* temp = head;
        int i=1;
        while(i<=arr.size()){
            Node* temp = new Node(arr[i]);
            temp->next = head;
            temp->data=arr[i];
            temp=head;
            i++;
        }
            
        return temp;
    }
};
