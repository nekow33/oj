/*Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.
If the last word does not exist, return 0.
Note: A word is defined as a character sequence consists of non-space characters only.*/
//需要条理清晰，考虑周全，思考到所有的可能性
public class LengthofLastWord {
    public int lengthOfLastWord(String s) {
        int len=s.length()-1;
        int lastspace=0;
        for(int i=len;i>=0;){
            if(s.charAt(i)==' '){
                i--;
                len=i;
            }else {
                break;
            }
        }
        for(int i=0;i<len;){
            if(s.charAt(i)!=' '){
                i++;
            }else {
                i++;
                lastspace=i;
            }
        }

        return len-lastspace+1;
    }
}
