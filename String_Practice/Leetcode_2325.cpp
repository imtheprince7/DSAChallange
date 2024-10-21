#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> substitutionTable;
        char currentChar = 'a';
        for(char ch : key){
            if(ch != ' ' && substitutionTable.find(ch) == substitutionTable.end()){
                substitutionTable[ch] = currentChar;
                currentChar++;
            }
        }

        string decoded_message;
        for (char ch : message) {
            if (ch == ' ') {
                decoded_message += ' '; // Keep spaces as is
            }
            else {
                decoded_message += substitutionTable[ch]; // Replace using substitution table
            }
        }
        return decoded_message;
    }
};

int main(){
    Solution solution;
    string key ="the quick brown fox jumps over the lazy dog",
          message = "vkbs bs t suepuv";
    cout<<solution.decodeMessage(key, message)<<endl;
    
    return 0;
}