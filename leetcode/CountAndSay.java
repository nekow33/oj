/*The count-and-say sequence is the sequence of integers with the first five terms as following:
1.     1                明确已知为1
2.     11               1号中有一个1             11
3.     21               2号中有两个1             21
4.     1211             3号中有一个2一个1         1211
5.     111221
1 is read off as "one 1" or 11.
11 is read off as "two 1s" or 21.
21 is read off as "one 2, then one 1" or 1211.
Given an integer n, generate the nth term of the count-and-say sequence.
Note: Each term of the sequence of integers will be represented as a string.*/
/*String的连接有三种方法StringBuffer StringBuilder String.concat() JDK给开发者的建议是当你要做String连接操作时，
请使用StringBuffer或StringBuilder，当你确定连接操作只发生在单一线程环境下时，使用StringBuilder而不是StringBuffer。
经过对jdk源码的分析（别人的分析） 需要连接的String的数量小于4的，直接使用String.concat()来连接不会产生垃圾
使用StringBuilder时的连接方法为 String.append(String)*/
//难受 做了好久
//用两个for循环来实现递归的思想，合理设置循环变量
public class CountAndSay {
    public String countAndSay(int n){
        String curr="1";
        String prev;
        int count;
        char say;
        for (int i=1;i<n;i++){
            prev=curr;
            curr="";
            count=1;
            say=prev.charAt(0);
            for (int j=1,len=prev.length();j<len;j++){
                if (prev.charAt(j)!=say){
                    curr=curr.concat(""+count).concat(""+say);
                    count=1;
                    say=prev.charAt(j);
                }
                else count++;
            }
            curr=curr.concat(""+count).concat(""+say);
        }
        return curr;
    }
}

