#include<iostream>
using namespace std;

int main (){

    int arr[] = {1,2,3,4,5};

    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<arr<<endl;

    int *arrptr =  arr;


    cout<<arrptr<<"////////"<<endl;
    // cout<<++arrptr<<endl;
   

   for( int i =0;i<size; i++){

      cout<<arrptr++<<endl;
   }


//    array in pointer 
   for( int i =0;i<size; i++){

      cout<<*(arr+i)<<endl;
   }


    return 0;

}