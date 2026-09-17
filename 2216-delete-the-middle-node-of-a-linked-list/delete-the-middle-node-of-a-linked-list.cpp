class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp= head;

        int c= 0;

        while(temp!=nullptr){
            c++;
            temp= temp->next;
        }

        if(c==1){
            return head->next;
        }

        int mid= (c/2);

        int x= mid-1;

        temp= head;
        for(int i=0;i<x;i++){
            temp= temp->next;
        }

        temp->next= temp->next->next;

        return head;
    }
};