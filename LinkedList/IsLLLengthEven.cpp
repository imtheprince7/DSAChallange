/*
    GFG practice day: 03/11/24 :
    Link;   https://www.geeksforgeeks.org/problems/linked-list-length-even-or-odd/1
      
*/


class Solution {
  public:
    bool isLengthEven(struct Node **head) {
        int count=0;
        Node* ptr = *head;
        
        if(ptr==NULL)
        return false;
        
        while(ptr!=NULL){
           count+=1;
           ptr=ptr->next;
        }
        
        return (count %2 ==0 ? true : false);
    }
};
