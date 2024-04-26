#include<iostream>
using namespace std;

void swap_fuct(int arr[],int size){
    for(int i=0;i<size;i+2){
        if((i+1)<size){
        swap(arr[i],arr[i+1]);
        }

    }
}
 
void display(int arr[], int size){
       for(int i=0;i<size;i++){
           cout<<arr[i]<<" ";
          } 
          cout<<endl;
  }


int main(){
  
   int even[] ={1,2,3,4,5,6,7,8};
   int odd[] ={1,2,3,4,5,6,7};
   int sizeeven = sizeof(even)/sizeof(even[0]);
   int sizeodd = sizeof(odd)/sizeof(odd[0]);
   swap_fuct(even,sizeeven);
   display(even,sizeeven);
  
   return 0;
}