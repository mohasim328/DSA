#include<iostream>
using namespace std;



int sumofarr(int arr[] , int size){


       int sum = 0;
       for (int i = 0; i < size; i++)
       {
          sum += arr[i];
       }

       return sum;
       
}

int main(){

 int arr[] = {1,2,3,4,5,6,7,8,9};
 int size = sizeof(arr)/sizeof(arr[0]);

 int ans = sumofarr(arr , size);

 cout<<"the sum of array is "<<ans<<endl;
 
 return 0;

}