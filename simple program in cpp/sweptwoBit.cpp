#include<iostream>
using namespace std;

void  swepNumber(int a,int b){

  a = a^b;
  b =a^b;
  a =a^b;

};


int main(){

    int A,B;
    cout<<"Enter ther value off A"<<endl;
    cin>>A;
    cout<<"Enter ther value off B"<<endl;
    cin>>B;
     

     cout<<"before the sweping of A , B : "<<" "<<A <<" "<<B<<endl;
     swepNumber(A,B);
     cout<<"after the sweping of A , B : "<<" "<<A <<" "<<B<<endl;


    return 0;

}