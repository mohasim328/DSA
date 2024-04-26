#include<iostream>
#include <utility>
using namespace std;

int main(){

  pair<int, string> P;

   P = {20 , "Mo Hasim"};

  pair<int, string> &P1 = P;
   P1.first = 21;

  cout<<"P pair"<<endl;
  cout<<P.first <<" "<<P.second<<endl;
  
  cout<<"P1 pair"<<endl;
  cout<<P.first <<" "<<P.second<<endl;
   
    return 0;
}
