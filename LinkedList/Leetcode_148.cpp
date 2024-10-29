#include<bits/stdc++.h>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };


 class Solution {
public:
    
    int len(ListNode *head){
        ListNode *curr = head;
        int ans = 0;
        while(curr != nullptr){
            ++ans;
            curr = curr->next;
        }
        return ans;
    }
    
    ListNode* sortList(ListNode* head) {
        int n = len(head);
        vector<int> temp(n);
        ListNode *curr = head;
        int ptr = 0;
        while(curr != nullptr){
            temp[ptr++] = curr->val;
            curr = curr->next;
        }
        
        sort(temp.begin(), temp.end());
        curr = head;
        for(auto &i : temp){
            curr->val = i;
            curr = curr->next;
        }
        return head;
    }
};

int main(){


return 0;

}