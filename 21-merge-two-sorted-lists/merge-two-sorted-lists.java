
class Solution {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ListNode mynode= new ListNode(100);
        ListNode c= mynode;

        ListNode a= list1;
        ListNode b= list2;

        // loop
        while(a!=null && b!=null){
            if(a.val<=b.val){
                c.next= a;
                a= a.next;
            }

            else{
                c.next= b;
                b= b.next;
            }

            c= c.next;
        }

        if(a==null) c.next= b;
        else c.next= a;

        return mynode.next;
    }
}