/*************************************************************************
	> File Name: 二叉树最大深度.cpp
	> Author: 
	> Mail: 
	> Created Time: 四 12/12 21:33:04 2019
 ************************************************************************/
/**
 给定一个二叉树，找出其最大深度。
 
 二叉树的深度为根节点到最远叶子节点的最长路径上的节点数。
 
 说明: 叶子节点是指没有子节点的节点。
 
 示例：
 给定二叉树 [3,9,20,null,null,15,7]，
 
 3
 / \
 9  20
 /  \
 15   7
 返回它的最大深度 3 。
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/maximum-depth-of-binary-tree
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 **/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int left_h = maxDepth(root->left);
        int right_h = maxDepth(root->right);
        return ((left_h>right_h?left_h:right_h)+1);
    }
};
