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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        short int carry = 0;
        ListNode* res = NULL;
        ListNode* tail = NULL;
        
        while((l1 != NULL || l2 != NULL) || carry>0)
        {
            short int sum = carry;
            
            if(l1 && !l2){
                sum += l1->val;
                l1 = l1->next;
            }
            else if(!l1 && l2){
                sum += l2->val;
                l2 = l2->next;
            }
            else if(l1 && l2){
                sum = sum + (l1->val + l2->val);
                l1 = l1->next;
                l2 = l2->next;
            }
                
            if(sum>9)
            {
                carry = sum/10;
                sum = sum%10;
            }
            else
                carry = 0;
            
            ListNode* temp = new ListNode(sum);
            
            if(!res)
                res = temp;
            else
                tail->next = temp;
            tail = temp;
            
        }
        
        return res;
    }
};