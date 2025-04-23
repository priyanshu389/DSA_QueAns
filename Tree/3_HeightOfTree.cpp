#include<bits/stdc++.h>
using namespace std;
#include "tree.h"

int heightOfTree(TreeNode* root){
  if(root == nullptr) return 0;

  int leftTree = heightOfTree(root->left);
  int rightTree = heightOfTree(root->right);

  return max(leftTree,rightTree) + 1;
}

int main(){
  TreeNode* root =  createSampleTree();

  cout<<"Height is "<<heightOfTree(root);
}