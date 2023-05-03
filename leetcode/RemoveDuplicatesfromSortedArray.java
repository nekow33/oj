
//Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.
//Do not allocate extra space for another array, you must do this in place with constant memory.
//For example,Given input array nums = [1,1,2],
//Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the new length.
//设两个指针i，j  j在i后一位，当i与j指的内容相同时，j++，不同时，i+1的值等于j的值,然后ij同时后移一位
class RemoveDuplicatesfromSortedArray {
    public int removeDuplicates(int[] nums) {
        int len=nums.length;
        int i=0,j=1;
        while (i<len-1&&j<len){
            if(nums[i]==nums[j]){
                j++;
            }else {
                nums[i+1]=nums[j];
                i++;
                j++;
            }
        }
        return i+1;
    }
}


/*LeetCode上的解答方案为
public int removeDuplicates(int[] nums) {
    int i = 0;
    for (int n : nums)
        if (i == 0 || n > nums[i-1])
            nums[i++] = n;
    return i;
}
 */
