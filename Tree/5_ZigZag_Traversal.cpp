#include <bits/stdc++.h>
using namespace std;
#include "tree.h"  

vector<vector<int>> ZigZagLevelOrder(TreeNode* root){

  vector<vector<int>> result;
  if(root == NULL){
      return result;
  }

  queue<TreeNode*> nodesQueue;
  nodesQueue.push(root);
  
  // Flag to determine the direction of
  // traversal (left to right or right to left)
  bool leftToRight = true;
  
  // Continue traversal until
  // the queue is empty
  while(!nodesQueue.empty()){
      // Get the number of nodes
      // at the current level
      int size = nodesQueue.size();
      
      // Vector to store the values
      // of nodes at the current level
      vector<int> row(size);
      
      // Traverse nodes at 
      // the current level
      for(int i = 0; i < size; i++){
          // Get the front node
          // from the queue
          TreeNode* node = nodesQueue.front();
          nodesQueue.pop();
          
          // Determine the index to insert the node's
          // value based on the traversal direction
          int index = leftToRight ? i : (size - 1 - i);
          
          row[index] = node->data;
          if(node->left){
              nodesQueue.push(node->left);
          }
          if(node->right){
              nodesQueue.push(node->right);
          }
      }
      leftToRight = !leftToRight;

      result.push_back(row);
  }
  
  return result;
}



// Helper function to print the result
void printResult(const vector<vector<int>>& result) {
for (const auto& row : result) {
  for (int val : row) {
      cout << val << " ";
  }
  cout << endl;
}
}



int main() {
    TreeNode* root = createSampleTree();
    vector<vector<int>> ans = ZigZagLevelOrder(root);
    printResult(ans);
    
    return 0;
}