import java.util.ArrayList;

public class ClimbStairs {
    ArrayList<Integer> s=new ArrayList<Integer>();
    public int climbStairs(int n){
        s.add(0);
        s.add(1);
        s.add(2);
        if(n>2)
        {
            add(n);
        }
        return s.get(n);
    }

    private void add(int n){
        while (n!=s.size()){
            add(n-1);
        }
        s.add(s.get(n-1)+s.get(n-2));
    }
}
