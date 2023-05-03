public class MergeKLists {
    public ListNode mergeKLists(ListNode[] lists){
        int len=lists.length;
        if(len<=1){
            return lists[0];
        }
        ListNode list=lists[0];
        for(int i=1;i<lists.length;i++){
            list=merge(list,lists[i]);
        }
        return list;
    }

    private ListNode merge(ListNode l1,ListNode l2){
        if(l1==null){
            return l2;
        }
        if(l2==null){
            return l1;
        }
        if(l1.val<l2.val){
            l1.next=merge(l1.next,l2);
            return l1;
        }else {
            l2.next=merge(l2.next,l1);
            return l2;
        }
    }
}
