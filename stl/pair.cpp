#include<iostream>
#include <utility>
using namespace std;

int main(){

  pair<int ,string> P;

    P = make_pair(20 , "hasim");
    // P = {2, "hasim"}    also valid 
    cout<<P.first <<" " <<P.second <<endl;

    // taking input 
   pair<int ,string> Q;

     cout<<"enter the piar value"<<endl;
     cin>>Q.first >>Q.second;
     cout<< Q.first<<"  "<<Q.second<<endl;
    return 0;
}

