class RomanToInteger {

    public int romanToInt(String s) {
       if(s.length()<0){
            return 0;
        }
        int num=0;
        char ch[] = new char[s.length()];
        for(int i=0;i<s.length();i++){
            ch[i]=s.charAt(i);
        }
        int l = s.length()-1;
        for(int i=0;i<=l;i++){
            if(ch[i]=='M'){
                ch[i]=1000;
            }
            if(ch[i]=='D'){
                ch[i]=500;
            }
            if(ch[i]=='C'){
                ch[i]=100;
            }
            if(ch[i]=='L'){
                ch[i]=50;
            }
            if(ch[i]=='X'){
                ch[i]=10;
            }
            if(ch[i]=='V'){
                ch[i]=5;
            }
            if(ch[i]=='I'){
                ch[i]=1;
            }
        }
        for (int i=0;i<l;i++){
            if(ch[i]<ch[i+1]){
                num=num-ch[i];
            }
            else{
                num=num+ch[i];
            }
        }
        num=num+ch[l];
        return num;
}
}