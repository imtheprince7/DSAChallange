#include <iostream>
#include <algorithm>
#include <cctype>   

using namespace std;

string nextCharacter(const string& str) {
    string lowerStr = str; 

    // Convert each character to lowercase
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), [](unsigned char c) {
        return tolower(c);
    });

    string result;    
    for (char c : lowerStr) {
        if (isalpha(c)) {  // Check if the character is a letter :- isalpha( )
            if (c == 'z') {
                result += 'a'; 
            } else {
                result += c + 1;  // Append next character
            }
        } else {
            result += c;  // Append non-letter characters as they are Like:----- space
        }
    }
    
    return result;
}

int main() {
    string str = "Hello World";
    cout << nextCharacter(str) << endl; // Output: ifmmp xpsme
    return 0;
}
