#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> result(n);

        for (int i = 0; i < n; ++i) {
            // Initially set the final price to the original price
            result[i] = prices[i];
            for (int j = i + 1; j < n; ++j) {
                // Find the first price[j] <= prices[i] and apply the discount
                if (prices[j] <= prices[i]) {
                    result[i] = prices[i] - prices[j];
                    break;
                }
            }
        }

        return result;




        // int n = prices.size();
        // vector<int> result(prices);  
        // stack<int> s;

        // for (int i = 0; i < n; ++i) {
        //    
        //     while (!s.empty() && prices[s.top()] >= prices[i]) {
        //         result[s.top()] -= prices[i];
        //         s.pop();
        //     }
        //   
        //     s.push(i);
        // }

        // return result;
        
    }
};

int main(){
    vector<int> prices = {8,4,6,2,3};
    Solution solution;
    auto answer = solution.finalPrices(prices);

    return 0;
}