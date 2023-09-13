#include<iostream>
using namespace std;

class A{
      
     public:

     void mymethod();

};
void A::mymethod(){

    cout<<"this is outside function from class"<<endl;
}
int main(){

    A myobj;

    myobj.mymethod();


        return 0;
}