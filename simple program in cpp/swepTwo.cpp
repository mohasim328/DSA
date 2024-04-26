#include<iostream>
using namespace std;

int main(){

    int A,B;
    cout<<"Enter ther value of A"<<endl;
    cin>>A;
    cout<<"Enter ther value of B"<<endl;
    cin>>B;
    cout<<"before the sweping of A , B : "<<" "<<A <<" "<<B<<endl;
   
     A = A^B;
     B = A^B;
     A = A^B;
     cout<<"After the sweping of A , B : "<<" "<<A <<" "<<B<<endl;
    return 0;

}