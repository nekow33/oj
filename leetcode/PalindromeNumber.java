

class PalindromeNumber {
    public boolean isPalindrome(int x) {
        if(x<0)
            return false;
        int tmp=0;
        int z=x;
        while(x>0){
            tmp=tmp*10+x%10;
            x=x/10;
            
        }
        if(tmp==z)
            return true;
        return false;
    }
}