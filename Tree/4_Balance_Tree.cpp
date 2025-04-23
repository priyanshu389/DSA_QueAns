#include <bits/stdc++.h>
using namespace std;
#include "tree.h"  

int heightOfTree(TreeNode* root){
    if(root == nullptr) return 0;
  
    int leftTree = heightOfTree(root->left);
    int rightTree = heightOfTree(root->right);
  
    return max(leftTree,rightTree) + 1;
  }

bool checkBalanced(TreeNode* root){
    if(!root) return true;

    int leftH = heightOfTree(root->left);
    int rightH = heightOfTree(root->right);

    if(abs(leftH-rightH)>1) return false;

    bool leftPart = checkBalanced(root->left);
    bool rightPart = checkBalanced(root->right);

    if(!leftPart || !rightPart) return false;

    return true;
}

int main() {
    TreeNode* root = createSampleTree();
    //root->left->left->left = new TreeNode(10);
    //root->left->left->left->left = new TreeNode(11);
    cout<<checkBalanced(root);
    return 0;
}