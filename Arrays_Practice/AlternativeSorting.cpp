#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {

  public:
    vector<int> alternateSort(vector<int>& array) {
        
        sort(array.begin(), array.end());
        int i = 0, j = array.size() - 1;
        vector<int> answer;
        
        while(i<=j){
            if (i <= j) {
                answer.push_back(array[j--]);  // Add the largest remaining element
            }
            if (i <= j) {
                answer.push_back(array[i++]);  // Add the smallest remaining element
            }
        }        
        return answer;
    }
};

int main(){
    vector<int> array ={7, 1, 2, 3, 4, 5, 6};
    Solution solution;
    auto answer = solution.alternateSort(array);

    return 0;
}