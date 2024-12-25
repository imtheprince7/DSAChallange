#include<bits/stdc++.h>
using namespace std;

class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
         int flag=0;
         DLLNode *newnode= new DLLNode(4);
         
         while(head != nullptr){
             if(head->next == nullptr) 
                flag=1;
        newnode->prev = head->prev;
        head->prev = head->next;
        head->next = newnode->prev;
        if(flag==1) 
            return head;
        head = head->prev;
        
    }
    return head;
    }
};

int main(){


    return 0;
}