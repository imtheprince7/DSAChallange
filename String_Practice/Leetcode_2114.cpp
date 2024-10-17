#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maximumWords = 0;
        
            for(const string& sentence : sentences) {
            int totalSpace = count(sentence.begin(), sentence.end(), ' ');
            int wordsInSentence = totalSpace + 1;
            
            maximumWords = max(maximumWords, wordsInSentence);
        }        
        return maximumWords;       
    }
};

int main(){
    Solution solution;
    vector<string> sentences {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
    cout<<solution.mostWordsFound(sentences)<<endl;
    return 0;
}

