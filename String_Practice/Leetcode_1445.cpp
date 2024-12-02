#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string s;
        for (int i = 1; ss >> s; ++i) {
            if (s.find(searchWord) == 0) {
                return i;
            }
        }
        return -1;
    }
};

int main(){
    Solution solution;
    string sentence = "i love eating burger", searchWord = "burg";
    cout<< solution.isPrefixOfWord(sentence, searchWord) <<endl;


}