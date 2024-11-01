#include<iostream>
using namespace std;

class SiemensEDAOffice{
     public:
     SiemensEDAOffice() { cout<<"SiemensEDAOffice" <<endl; }
     void work(){ cout<<"I am working in Office"<<endl; }

};


class Freelancing{
     public:
     Freelancing() { cout<<"Freelancing" <<endl; }
     void work(){ cout<<"I am working for Freelancing"<<endl; }

};

class Prince: public SiemensEDAOffice, public Freelancing {
     public:
     Prince() {  cout<<"Prince" <<endl; }
     
     // void work(){ cout<<"I am working in my home to complete basic stuff"<<endl; }

};

int main(){
     Prince prince;
     // prince.work();

     prince.SiemensEDAOffice::work();       
     return 0;
}