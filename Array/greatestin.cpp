#include<iostream>
using namespace std;

int greatestfinder(int arr[],int size){

      int greatest = arr[0];   

       for(int i =0; i<size;i++){
        
          if(arr[i]>greatest){
            greatest = arr[i];
          }
        
       }
      return greatest;

}



int main(){

int arr[10] ={82,6,4,21,2,-9,85,8,6,7};
int size=10;
cout<<"the greatest number is"<<endl;
cout<<greatestfinder(arr,size);
    return 0;
}