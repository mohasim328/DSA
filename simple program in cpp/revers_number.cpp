#include<iostream>
#include<math.h>
using namespace std;
int main(){
   int n,temp,r,ans=0;
   
   cout<<"enter the number"<<endl;
   cin>>n;
   temp = n;
   while(n>0){
    r=n%10;
    ans = (ans*10)+r;
    n=n/10;
   }
   cout<<ans<<endl;
   if(temp==ans){
    cout<<"number is palindrom"<<endl;
   }
   else{
    cout<<"number is not palindrom"<<endl;
   }
   return 0;
}