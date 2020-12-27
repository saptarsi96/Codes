#include<bits/stdc++.h>

using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

 void levelOrder(TreeNode* root){
     if(root==NULL){
         return;
     }
     queue<TreeNode* > q1;
     q1.push(root);
     while(!q1.empty()){
         TreeNode *top = q1.front();
         cout << top->val << " ";
         q1.pop();
         if(top->left!=NULL) q1.push(top->left);
         if(top->right!=NULL) q1.push(top->right);
         //q1.pop();
     }    
 }

 void printAtLevel(TreeNode* node,int level){
    if(node==NULL)
        return;

    if(level==1){
        cout << node->val << " ";
        return;
    }
    
    printAtLevel(node->left,level-1);
    printAtLevel(node->right,level-1);
 }
 

int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    //levelOrder(root);
    printAtLevel(root,2);

}