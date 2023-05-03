/*Implement strStr().
Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.*/
public class ImplementStr {
    public int strStr(String haystack, String needle) {
        //类似与答案的方法，先判断j的长度，然后i+j是否超过了haystack的长度，因为后面将haystack[i+j]与needle[j]比较，如果不同i++并且j从零开始，如果相同j++继续判断后续的字母haystack[i+j]是否与相同
        //当然Java中String类中存在方法 int indexOf(String str)就是返回str在该String下的位置与题目相同
        for (int i=0;;){
            for(int j=0;;){
                if(j==needle.length()){
                    return i;
                }
                if(i+j==haystack.length()){
                    return -1;
                }
                if(haystack.charAt(i+j)!=needle.charAt(j)){
                    break;
                }else {
                    j++;
                }
            }
            i++;
        }

        //LeetCode给出的方法
        /*for (int i = 0; ; i++) {
            for (int j = 0; ; j++) {
                if (j == needle.length()) return i;
                if (i + j == haystack.length()) return -1;
                if (needle.charAt(j) != haystack.charAt(i + j)) break;
            }
        }*/
        //最简单的方法
        /*if(needle.length()>haystack.length()){
            return -1;
        }
        return haystack.indexOf(needle);*/
    }
}
