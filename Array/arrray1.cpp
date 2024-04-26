#include<iostream>
using namespace std;


bool indexfinder(int *arr , int target, int s){



    for(int i =0; i<s ; i++){

        if( arr[i] == target ){
            return true;
        }
    }
    return false;
}


int main(){

   int arr[]={1,2,3,4,5,6,7,8,9}; 
   int target = 2;

   int s = sizeof(arr) / sizeof(arr[0]);
   bool ans = indexfinder(arr , target, s);

   cout<<"The answer is "<<ans ;


    return 0;
}