#include<bits/stdc++.h>
using namespace std;
#include "tree.h"

void inorder(TreeNode* root){
  if(root == nullptr)return;

  inorder(root->left);
  cout<<root->data<<" -> ";
  inorder(root->right);
}

int main(){
  TreeNode* root =  createSampleTree();
  inorder(root);
}