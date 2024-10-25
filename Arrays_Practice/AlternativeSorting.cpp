#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
        
        sort(arr.begin(), arr.end());
        int i = 0, j = arr.size() - 1;
        vector<int> answer;
        
        while(i<=j){
            if (i <= j) {
                answer.push_back(arr[j--]);  // Add the largest remaining element
            }
            if (i <= j) {
                answer.push_back(arr[i++]);  // Add the smallest remaining element
            }
        }        
        return answer;
    }
};

int main(){
    vector<int> vect ={7, 1, 2, 3, 4, 5, 6};
    Solution solution;
    auto answer = solution.alternateSort(vect);
    // cout<<answer;

    return 0;
}