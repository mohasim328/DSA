#include<iostream>
#include <utility>
using namespace std;

int main(){

  pair<int, int> P_array[3];

    P_array[0] = {1,2};
    P_array[1] = {2,3};
    P_array[2] = {4,5};


    swap(P_array[0] , P_array[2]);

    for (int i = 0; i < 3; ++i )
    {
        cout<<P_array[i].first <<" " <<P_array[i].second<<endl;
    }
    
   
    return 0;
}
