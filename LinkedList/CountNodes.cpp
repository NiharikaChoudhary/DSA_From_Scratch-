// GFG
// https://www.geeksforgeeks.org/problems/count-nodes-of-linked-list/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=count-nodes-of-linked-list


// Given a singly linked list. The task is to find the length of the linked list, where length is defined as the number of nodes in the linked list.
// Example 1:

// Input:
// LinkedList: 1->2->3->4->5
// Output: 5
// Explanation: Count of nodes in the 
// linked list is 5, which is its length.


class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
        Node* temp= head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        return count;
    }
};
    
