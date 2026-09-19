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
    ListNode* add(ListNode* l1, ListNode* l2,int carry){
        if(l1==NULL && l2==NULL){
            if(carry==1){
                return new ListNode(1);
            }
            return NULL;
        }
        int sum =  carry;
        if(l1!=NULL){
            sum+=l1->val;
        }
        if(l2!=NULL){
            sum+=l2->val;
        }
        int digit = sum%10;
        carry = sum/10;
        ListNode* node = new ListNode(digit);
        if(l1!=NULL){
            l1=l1->next;
        }
        if(l2!=NULL){
            l2=l2->next;
        }
        node->next=add(l1,l2,carry);
        return node;
       
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       return add(l1,l2,0);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna