/*Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
You may assume no duplicates in the array.你可以假设数组中没有重复项*/
public class SearchInsertPosition {
    public int searchInsert(int[] nums, int target) {
        //二分法；
        int r = nums.length;
        int l = 0;
        while(l < r){
            int mid = (l+r)/2;
            if(nums[mid] < target)
                l = mid +1;
            else
                r = mid;
        }
        return l;
        //直接遍历效率太低了，远不如二分法；
        /*int len=nums.length;
        int i=0;
        for(;i<len;i++){
            if(nums[i]>=target){
                return i;
            }
        }
        return i;*/
    }
}
