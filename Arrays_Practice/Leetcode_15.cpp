#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         vector<vector<int>> result;
    int n = nums.size();

    // Sort the array to facilitate the two-pointer technique
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 2; ++i) {
        // Skip duplicate elements to avoid duplicate triplets
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0) {
                result.push_back({nums[i], nums[left], nums[right]});
                // Skip duplicates for left and right
                while (left < right && nums[left] == nums[left + 1]) ++left;
                while (left < right && nums[right] == nums[right - 1]) --right;

                // Move pointers inward
                ++left;
                --right;
            } 
            else if (sum < 0) {
                ++left;
            } 
            else {
                --right;
            }
        }
    }

    return result; 
    }
};

int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    Solution solution;
    cout<<solution.threeSum(nums) <<endl;

    return 0;
}