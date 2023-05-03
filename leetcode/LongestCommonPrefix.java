class LongestCommonPrefix {
    public String longestCommonPrefix(String[] strs) {
        int len=strs.length;
        if(len<=0){
            return "";
        }
        int minlen=strs[0].length();
        for(int i=1;i<len; ) {
            if (strs[i].length() < minlen) {
                minlen = strs[i].length();
            }
            i++;
        }
        if(minlen<=0){
            return "";
        }
        int pos=0;
        
        boolean get=false;
        for(int i=0;i<minlen;){
            for(int j=0;j<len;j++){
                char ch=strs[0].charAt(i);
                char chs=strs[j].charAt(i);
                if(ch!=chs){
                    pos=i;
                    get=true;
                    break;
                }
                
                
            }
           
            if(get){
                break;
            }
            i++;
            if(i>=minlen){
                    get=true;
                    pos=i;
                    break;
                }
        }
        
        String s = strs[0].substring(0,pos);
        return s;
        
    }
}