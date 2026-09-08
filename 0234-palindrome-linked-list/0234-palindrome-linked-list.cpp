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
    bool isPalindrome(ListNode* head) {
        ListNode* first=head;
        ListNode* second=head;
        while(second!=NULL&&second->next!=NULL){
            first=first->next;
            second=second->next->next;
        }
        ListNode* prev=NULL;
        ListNode* curr=first;
        while(curr){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev=curr;
            curr = nextNode;
        }
        second=head;
        first=prev;
        while(first!=NULL){
            if(first->val!=second->val){
                return false;
                break;
            }
            first=first->next;
            second=second->next;
        }
        return true;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna