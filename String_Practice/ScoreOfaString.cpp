#include<iostream>
using namespace std;
int scoreOfString(string str){
    if(str.length()<2)
        return 0;
    
    int sumofChars =0;
    for(int i=0; i<str.length()-1; i++){
        sumofChars += abs(str[i] - str[i+1]);
    }
    return sumofChars;
}

int main(){
    string str = "hello";
    cout<<scoreOfString(str)<<endl;
    return 0;
}