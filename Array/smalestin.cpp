#include<iostream>
using namespace std;

int smalestfinder(int arr[],int size){

      int smalest = arr[0];   

       for(int i =0; i<size;i++){
        
          if(arr[i]<smalest){
            smalest = arr[i];
          }
        
       }
      return smalest;

}
  


int main(){

int arr[10] ={82,6,4,21,2,-9,5,8,6,7};
int size=10;
cout<<"the smalest number is"<<endl;
cout<<smalestfinder(arr,size);
    return 0;
}