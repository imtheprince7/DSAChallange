#include<bits/stdc++.h>
using namespace std;


// https://www.geeksforgeeks.org/problems/left-view-of-binary-tree/1

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};

class Solution {
  public:
    vector<int> leftView(Node *root){
   // Your code here
    vector<int> ans;
    if (root == nullptr) {
        return ans;
    }
    
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()){
        int n = q.size();
        
        
        for(int i=0;i<n;i++){
            Node* curr = q.front();
            q.pop();
            
            if(i ==0 ){
                ans.push_back(curr->data);
            }
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
    }
    
    return ans;
  }
};

int main(){


    return 0;
}