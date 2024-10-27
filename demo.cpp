#include<bits/stdc++.h>
using namespace std;

class Demo{
       const string studentName;
public:
        Demo(string str ="Karan Singh" ): studentName(str) {  }

    void getName(){ cout<<studentName <<endl; }
};


int main(){
    Demo demo;
    demo.getName();

    return 0;
}