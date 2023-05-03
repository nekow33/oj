public class RemoveFromEndofList{
    public ListNode removeNthFromEnd(ListNode head,int n){
        ListNode end=new ListNode(0);
        ListNode temp=new ListNode(0);
        end.next=head;
        temp.next=head;
        head=temp;
        while (n>0){
            end=end.next;
            n--;
        }
        while (end.next!=null){
            temp=temp.next;
            end=end.next;
        }
        temp.next=temp.next.next;
        return head.next;

    }
}


//        ListNode temp=head;
//        int len=1;
//        while (temp.next!=null){
//            temp=temp.next;
//            len++;
//        }
//        if(n==len){
//            head=head.next;
//            return head;
//        }
//        int rm=len+1-n;
//        temp=head;
//        for(int i=1;i<=len;i++){
//            if(i==rm-1){
//                temp.next=temp.next.next;
//            }else {
//                temp=temp.next;
//            }
//        }
//        return head;