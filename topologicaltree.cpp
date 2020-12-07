#include<bits/stdc++.h>

using namespace std;

vector<int> g[100];
bool vis[100];

struct TreeNode{

    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : data(0),left(nullptr),right(nullptr) {}
    TreeNode(int x) : data(x),left(nullptr),right(nullptr) {}
};
stack<int> s1;

void inorder(TreeNode* root){

    if(root == NULL)
        return;
    s1.push(root->data);
    inorder(root->left);
    inorder(root->right);
}

int main(){

    struct TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    inorder(root);
    while(!s1.empty()){
        cout << s1.top() <" ";
        s1.pop();
    }


}





