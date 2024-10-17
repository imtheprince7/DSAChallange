#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int totalSum =0;
        for(auto ele : operations){
            if(ele == "X++" || ele == "++X"){
                totalSum+= 1;
            }
            else if(ele == "X--" || ele == "--X"){
                totalSum = totalSum - 1;
            }
        }

        /*      \\ Optimal Solution
        for (auto& op : operations) {
            totalSum += (op[1] == '+' ? 1 : -1);
        }
        */


        return totalSum;
    }
};

int main(){
    vector<string> operations {"--X","X++","X++"};
    Solution solution;
    cout<<solution.finalValueAfterOperations(operations);
    return 0;
}