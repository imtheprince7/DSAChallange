#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int currSum=0, maxSum=nums[0];
        for(int i=0; i<nums.size(); i++){
            currSum= currSum+nums[i];
            if(currSum > maxSum){
                maxSum = currSum;
            } 
            if(currSum < 0){
                currSum=0;
            }
        }
         return maxSum;
    }
};

int main(){
    
    Solution solution;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<solution.maxSubArray(nums);


    return 0;
}