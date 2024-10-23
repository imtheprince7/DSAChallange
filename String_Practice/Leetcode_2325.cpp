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
                ; // Keep spaces as is it
                decoded_message += ' ';
            }
            else { // Replace using substitution table .....
                decoded_message += substitutionTable[ch];
            }
        }
        return decoded_message;
    }
};

int main(){
    Solution solution;
    string key ="the quick brown fox jumps over the lazy dog",
          message = "vkbs bs t suepuv";
          string result = solution.decodeMessage(key, message);
    cout<<"Answer is: \t"<<result<<endl;
    
    return 0;
}