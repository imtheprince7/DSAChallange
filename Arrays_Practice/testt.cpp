#include<bits/stdc++.h>
using namespace std;

class Base{
    int x, y;
public:
    Base(){ cout<<"default-constructor called"<<endl; }
    Base(int x, int y) : x{x}, y{y} { cout<<"parameterized-constructor called- B_class  "<<endl; }
    void showValue(){ cout<<"X:   "<<x <<" "<<"Y:   "<<y<<endl; }
};

class Derived : public Base{
    int z;
public:
    Derived() { cout<<"default-constructor called"<<endl; }
    Derived(int X, int Y, int Z): Base(X, Y) , z{Z}{  cout<<"parameterized-constructor called- D_class"<<endl;  }

    void showValue(){ cout<<"Z:   "<<z <<endl;  }
};
int main(){
    Derived d(10,20,30);
    Base b = d;
    b.showValue();

    return 0;
}