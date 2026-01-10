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
            ListNode* ptr_l1 = l1;
            ListNode* ptr_l2 = l2;
            ListNode* l3 = new ListNode(0);
            ListNode* ptr_l3 = l3;
            int a,b;
            int sum;
            int c=0,d=0;
            while(ptr_l1 != nullptr || ptr_l2 != nullptr || c!=0){
                sum = (ptr_l1 ? ptr_l1->val : 0) + (ptr_l2 ? ptr_l2->val : 0) + c;
                c=sum/10;
                d=sum%10;
                ptr_l3->next=new ListNode(d);
                if (ptr_l1 != nullptr) ptr_l1 = ptr_l1->next;
                if (ptr_l2 != nullptr) ptr_l2 = ptr_l2->next;
                ptr_l3=ptr_l3->next;
            }
            return l3->next;
        }
    };