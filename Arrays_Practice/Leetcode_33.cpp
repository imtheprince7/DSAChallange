#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low =0, high = nums.size()-1;
        if(nums.size() ==0)
                return -1;
         while(low <= high){
           int mid=(low+high)/2;

            //If element found at mid, then return.
            if(nums[mid]==target) 
                return mid;

            //Left Side
            if(nums[low] <= nums[mid]){
                if(nums[low] <= target && target < nums[mid]){
                    //Slide Left
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }

            //Right Side
            else{
                if(nums[mid] < target && target <= nums[high]){
                    //Slide to Right
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
        }
        return -1;
    }
};


int main(){
    vector<int> nums = {4,5,6,7,0,1,2};   
    int target = 0;
    Solution solution;
    cout<<solution.search(nums, target) <<endl;
    return 0;
}