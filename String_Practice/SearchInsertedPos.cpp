#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int count = 0, position = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums.at(i) == target){
                position = i;
                break;
            }
            else if( nums.at(i) > target ){
                position = i;
                // cout<<"coming :"<<" "<<position<<" ";
                break;
            }
            else{
                count++;
            }                
        }
        if( count == nums.size())
            return count;
        return position;
        
    }
};

int main(){
    vector<int> vect (1,3,5,6);
    return 0;
}