/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    private boolean compare(TreeNode s1,TreeNode s2){
        if(s1==null && s2 ==null)
            return true;
        if(s1==null||s2==null)
            return false;
        return (s1.val==s2.val)&&(compare(s1.left,s2.right))&&(compare(s1.right,s2.left));
    }
    public boolean isSymmetric(TreeNode root) {
        if(root==null)
            return true;
        return compare(root.left,root.right);
    }
}