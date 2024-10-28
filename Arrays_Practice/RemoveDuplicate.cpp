#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> removeDuplicate(vector<int>& arr) {
        vector<int> answer; 
         bool visited [101];
        for(int i:arr){
            if(!visited[i])
                answer.push_back(i);
            visited[i] = true;
        }
        return answer;
    }
};

int main(){
    vector<int> arr = {2, 2, 3, 3, 7, 5};
    Solution solution;
    auto answer = solution.removeDuplicate(arr);
    

    return 0;
}