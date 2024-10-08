#include<iostream>
using namespace std;

string toLowerCase(string s) {
        string answer = "";
        for(int i = 0; i< s.size(); i++){
            
            // int ch = s[i];
            // if( ch >= 65 && ch <= 90){

            if(s[i] >= 'A' || s[i] <= 'Z'){
                answer += tolower(s[i]);
            }else
                answer+= s[i];
        }
        return answer;        
 }
 
int main(){
    string str = "Hello World";
    cout<<toLowerCase(str)<<endl;
}