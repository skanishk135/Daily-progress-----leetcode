/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* curr = head;
        while(curr!=NULL){
            if(curr->child!=NULL){
                Node* store = curr->next;
                curr->next=flatten(curr->child);
                curr->next->prev=curr;
                curr->child = NULL;
              while(curr->next!=NULL){
                curr=curr->next;}
                curr->next=store;
                if(store!=NULL){
                    store->prev=curr;
                }
              
            }
            curr=curr->next;
        }
        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna