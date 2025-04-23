#include<bits/stdc++.h>
using namespace std;

class Tree{

  public:
  int val;
  Tree* left;
  Tree* right;

  Tree(int data){
    this->val = data;
    left = nullptr;
    right = nullptr;
  }
};

int main(){
  Tree* first = new Tree(1);
  first->left = new Tree(2);
  first->right = new Tree(3);
  first->left->left = new Tree(4);

 cout<<first->left->val; 
}