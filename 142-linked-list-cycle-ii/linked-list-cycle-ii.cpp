class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode * slow=head;        
        ListNode * fast=head;  
        bool flag= false;      

        while(fast!=NULL && fast->next!=NULL){
            slow= slow->next;
            fast= fast->next->next;

            if(slow==fast){
                flag= true;
                break;
            }
        }

        if(flag==false){
            return NULL;
            // there is no cycle in the linked list
        }

        ListNode *myptr= head;
        while(myptr!=slow){
            slow= slow->next;
            myptr= myptr->next;
        }

        return slow;


    }
};