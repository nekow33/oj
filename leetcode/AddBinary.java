/*Given two binary strings, return their sum (also a binary string).
For example,
a = "11"
b = "1"
Return "100".*/
public class AddBinary {
    public String addBinary(String a, String b){
        if(a.length()<b.length()){
            String temp=a;
            a=b;
            b=temp;
        }
        int al=a.length();
        int bl=b.length();
        int p=0;
        String res="";
        while (al>0){
            if(bl>0){
                int r=chartoint(a.charAt(al-1))+chartoint(b.charAt(bl-1))+p;
                if(r>=2){
                    r=r%2;
                    p=1;
                }else p=0;
                res=(r+"").concat(res);
                bl--;
            }else {
                int r=chartoint(a.charAt(al-1))+p;
                if(r>=2){
                    r=r%2;
                    p=1;
                }else p=0;
                res=(r+"").concat(res);
            }
            al--;
        }
        if(p==1){
            res=("1").concat(res);
        }
        return res;
    }

    private int chartoint(char a){
        String str=""+a;
        return Integer.parseInt(str);
    }
}
