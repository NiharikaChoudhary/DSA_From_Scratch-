// GFG
//  https://www.geeksforgeeks.org/problems/search-in-linked-list-1664434326/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=search-in-linked-list-1664434326

// Given a linked list of n nodes and a key , the task is to check if the key is present in the linked list or not.

// Example:

// Input:
// n = 4
// 1->2->3->4
// Key = 3
// Output:
// True
// Explanation:
// 3 is present in Linked List, so the function returns true.

class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, struct Node* head, int key) {
        // Code here
        Node* temp = head;
        while(temp){
            if(temp->data==key){
                return true;
            }
            else{
                temp=temp->next;
            }
        }
        return false;
    }
};
