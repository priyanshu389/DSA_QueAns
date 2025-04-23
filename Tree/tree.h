

#ifndef TREE_H
#define TREE_H

#include <bits/stdc++.h>
using namespace std;
#include <memory>

// using namespace std; // Avoid using namespace std in header files

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data){
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};

#endif

// Function to create a sample predefined tree
TreeNode* createSampleTree() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    return root;
}