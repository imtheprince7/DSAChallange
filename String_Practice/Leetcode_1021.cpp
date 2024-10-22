#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        std::string result;
    int balance = 0;
    
    // Traverse through the string
    for (char c : s) {
        if (c == '(') {
            // Only append when the balance is not zero (i.e., not the outermost '(')
            if (balance > 0) {
                result += c;
            }
            balance++;  // Increment balance when encountering '('
        } else {
            balance--;  // Decrement balance when encountering ')'
            // Only append when the balance is not zero (i.e., not the outermost ')')
            if (balance > 0) {
                result += c;
            }
        }
    }
    
    return result;
    }
};

int main(){
    Solution solution;
    string str = "(()())(())";
    cout<<solution.removeOuterParentheses(str);

    return 0;


}