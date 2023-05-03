/*Find the contiguous subarray within an array (containing at least one number) which has the largest sum.
For example, given the array [-2,1,-3,4,-1,2,1,-5,4],
the contiguous subarray [4,-1,2,1] has the largest sum = 6.*/

public class MaximumSubarray {
    public int maxSubArray(int[] nums){
        //一下的方法时间复杂度为O(n)
        /*如果某个数字前面的数字的和小于零，那么只要这个数字就暂时是最大的，如果大于零，那么加上就可以了。妙啊*/
        int max=nums[0];
        int sum=0;
        for(int i=0;i<nums.length;i++){
            if(sum<0){
                sum=nums[i];
            }else {
                sum+=nums[i];
            }
            if(sum>max){
                max=sum;
            }
        }
        //虽然以下这样可行但是时间复杂度为n^2
        /*int len=nums.length;
        int max=nums[0];
        int temp=0;
        for(int i=0;i<len;i++){
            for(int j=0;j+i<len;j++){
                temp=temp+nums[j+i];
                if(temp>max){
                    max=temp;
                }
            }
            temp=0;
        }*/
        return max;
    }
}
