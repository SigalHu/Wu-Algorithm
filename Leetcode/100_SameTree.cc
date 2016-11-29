#include<cstdlib>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
//判断2个二叉树是否相等
    bool isSameTree(TreeNode* p, TreeNode* q) {
         if(!p && !q)
            return true;
        else if(!p && q)
            return false;
        else if(p && !q)
            return false;
        else{
            if(p->val != q->val)
                return false;
            else
                return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }
    }
};