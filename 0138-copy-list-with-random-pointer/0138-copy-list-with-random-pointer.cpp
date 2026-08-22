/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        if(head==NULL){
            return NULL;
        }
        unordered_map<Node*,Node*> mp;

        Node* newhead=new Node(head->val);
        Node* oldTemp=head->next;
        Node* newTemp=newhead;
        mp[head]=newhead;
        while(oldTemp!=NULL){
            Node* copyNode=new Node(oldTemp->val);
            mp[oldTemp]=copyNode;
           newTemp->next=copyNode;
            oldTemp=oldTemp->next;
            newTemp=newTemp->next;
        }
        oldTemp=head;newTemp=newhead;
        while(oldTemp!=NULL){
           newTemp->random = mp[oldTemp->random];
           oldTemp=oldTemp->next;
           newTemp=newTemp->next;
        }
       return newhead;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna