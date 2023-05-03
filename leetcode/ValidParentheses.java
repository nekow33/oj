//Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
//The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.
//栈的使用
class ValidParentheses {
    public boolean isValid(String s){
        if(s==null){
            return true;
        }
        char str[]=s.toCharArray();
        int len=str.length;
        if(len<2){
            return false;
        }
        char[] stack=new char[len+1];
        int top=0;
        for(int i=0;i<len;i++){
            if(str[i]=='('||str[i]=='{'||str[i]=='['){
                stack[top+1]=str[i];
                top++;
            }
            if(str[i]==')'){
                if(stack[top]=='('){
                    top=top-1;
                }
                else{
                    return false;
                }
            }
            if(str[i]==']'){
                if(stack[top]=='['){
                    top=top-1;
                }
                else{
                    return false;
                }
            }
            if(str[i]=='}'){
                if(stack[top]=='{'){
                    top=top-1;
                }
                else{
                    return false;
                }
            }
        }
        if(top!=0){
            return false;
        }
        return true;

    }
}
