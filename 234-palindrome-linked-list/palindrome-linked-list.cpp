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
    ListNode* reverseList(ListNode* head){
        ListNode* curr= head;
        ListNode* prev= NULL;

        while(curr!=NULL){
            ListNode* next= curr->next;
            curr->next= prev;
            prev= curr;
            curr=next;
        }

        return prev;
    }


    bool isPalindrome(ListNode* head) {
        // use the slow and fast pointers

        ListNode *slow= head;
        ListNode *fast= head;

        while(fast!=NULL && fast->next!=NULL){
            slow= slow->next;
            fast= fast->next->next;
        }

        // reverse the second half of the list
        ListNode* j= reverseList(slow);
        ListNode* i= head;

        while(j!=NULL){
            if(i->val!=j->val) return false;
            i= i->next;
            j= j->next;
        }

        return true;
        

    }
};