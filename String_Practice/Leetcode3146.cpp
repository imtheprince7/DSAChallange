#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<cmath>

using namespace std;

class Solution {
public:
    int findPermutationDifference(string s, string t) {
        if (s.length() != t.length())
             return -1; 

        unordered_map<char,vector<int>> charPositions;

        // Record positions of each character in string s
        for (int i = 0; i < s.length(); i++) {
            charPositions[s[i]].push_back(i);
        }
        int finalAnswer = 0;
        for (int i = 0; i < t.length(); i++) {
            if (charPositions.find(t[i]) != charPositions.end() && !charPositions[t[i]].empty()) {
                int pos = charPositions[t[i]].front();
                finalAnswer += std::abs(pos - i); 
                charPositions[t[i]].erase(charPositions[t[i]].begin()); // Remove used position
            }
        }

        return finalAnswer;


    }
};

int main(){
    Solution solution;
    string str1 = "abc", str2 = "bac";
    cout<<solution.findPermutationDifference(str1, str2)<<endl;
    return 0;
}
