#include<iostream>
using namespace std;


class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int start=0;
        int end=n-1;
        int mid =(start+end)/2;
        
      while(start<=end){
         
           if(arr[mid]==k){
               return mid;
               
           }
           else if(arr[mid]>k){
              
             end=mid-1;
           }
           
           else if(arr[mid]<k){
              start=mid+1;
           }
       }
    }
};

int main(){

    
}