#include<iostream>
using namespace std;

void printarr(int a[]){
   int size =sizeof(a)/sizeof(a[0]);
   cout<<sizeof(a)<<endl;
   cout<<size<<endl;
  
}


int main(){

  int a=5;
  int *p = &a;
  int *n =&*p;

  cout<<a<<endl;
  cout<<p<<endl;
  cout<<&a<<endl;
  cout<<*p<<endl;
  cout<<*n<<endl;
  cout<<n<<endl;
 int A[]={1,2,3,4,5,6,7,8,9}; 

//  int *ptr = A;
//  cout<<ptr<<endl;
//  cout<<*(ptr+1)<<endl; 
//  cout<<ptr+2<<endl; 





}