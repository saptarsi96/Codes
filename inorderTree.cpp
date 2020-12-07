
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 #include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> values;
        inorder(root,values);
        TreeNode* ans = new TreeNode();
        for(int v:values){
            ans->right = new TreeNode(v);
            ans = ans->right;
        }
        return ans->right;
    }
    
    void inorder(TreeNode* root,vector<int> values){
        if(root == NULL)
            return;
        inorder(root->left,values);
        values.push_back(root->val);
        inorder(root->right,values);
    }

int main(){

    auto ans = increasingBST([5,3,6,2,4,null,8,1,null,null,null,7,9]);
    for(int i:ans){
        
    }
}
};



