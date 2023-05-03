/*Given a non-negative integer represented as a non-empty array of digits, plus one to the integer.
You may assume the integer do not contain any leading zero, except the number 0 itself.
The digits are stored such that the most significant digit is at the head of the list.*/
//最后一位加一，进位到之前一个数字，最后返回数组{9,9}->{1,0,0} {-1,9}->{0,0}
//设一个进位初始为一，最后还是一则证明数组长度需要加一；
public class PLusOne {
    public int[] plusOne(int[] digits) {
        int len=digits.length-1;
        int p=1;
        for (int i=len;i>=0;i--){
            if(p==1){
                digits[i]++;
                p=0;
            }
            if(digits[i]==10){
                digits[i]=0;
                p=1;
            }
        }
        if(p==1){
            int[] res= new int[len+2];
            res[0]=1;
            for(int i=0;i<=len;i++){
                res[i+1]=digits[i];
            }
            return res;
        }
        return digits;
    }
}
