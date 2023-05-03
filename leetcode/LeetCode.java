import java.io.File;

public class LeetCode {
    public static void main(String[] args){
        TreeNode t1=new TreeNode(1);
        t1.left=new TreeNode(2);
        t1.left.left=new TreeNode(3);
        t1.right=new TreeNode(4);
        TreeNode t2=new TreeNode(1);
        t2.left=new TreeNode(2);
        t2.left.left=new TreeNode(3);
        t2.right=new TreeNode(5);
        SameTree so=new SameTree();
        boolean a=so.isSameTree(t1,t2);
        System.out.println(a);

    }
}
