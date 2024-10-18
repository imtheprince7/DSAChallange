#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for( int num : nums){
            result ^= num;
        }
        return result;
    }
};

int main(){
    vector<int> vect ={4,1,2,1,2};
    Solution solution;
    cout<<solution.singleNumber(vect)<<endl; 

    return 0;
}