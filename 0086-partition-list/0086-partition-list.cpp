/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
          ListNode* temp =head;
          ListNode* greaterHead = new ListNode(x);
          ListNode*  greaterTail = greaterHead;
          ListNode* lesserHead = new ListNode(0);
          ListNode* lesserTail = lesserHead;
          while(temp!=NULL){
             if(temp->val>=x){
                 greaterTail->next = temp;
                 greaterTail = temp;
                 temp=temp->next;
             }  
             else{
                 lesserTail->next = temp;
                 lesserTail = temp;
                temp=temp->next;
                
              }
          }
        
        lesserTail->next= greaterHead->next;
        greaterTail->next = NULL;
        return lesserHead->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna