#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  
  int val;
  Node* next;

  Node(int val){
    next = nullptr;
    this->val=val;
  }

  Node(int val,Node* next){
    this->val = val;
    this->next = next;
  }
};

void readLinkedList(Node* head){

  Node* temp = head;
  while (temp)
  {
    cout<<temp->val<<" -> ";
    temp=temp->next;
  }
}

Node* arrayToList(vector<int> data){
  Node* head = new Node(data[0]);
  Node* temp = head;

  for(int i=1;i<data.size();i++){
    Node* tempNode = new Node(data[i]);
    temp->next = tempNode;
    temp = temp->next;
  }

  return head;
}

int main(){
  vector<int> data = {1,2,3,4,5};
  readLinkedList(arrayToList(data));
}