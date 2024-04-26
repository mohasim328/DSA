#include<iostream>
using namespace std;
// array operation 
// traversal
// deletion
void trav(int arr[], int size){
    
for(int i=0; i<size; i++){
      cout<<arr[i]<<" ";
     }
}

// insertion
int insertion(int arr[] ,int size, int element , int capacity, int index){
    if(size>=capacity){
        return -1;
    }
    
        for(int i = size-1;i>=index; i-- ){
            
            arr[i+1] = arr[i];
            
        }
        arr[index] = element;
          ++size;
         cout<<endl<<arr[index]<<" is inserted"<<endl;
        return 1;
    
}


void deleteElement(int arr[] , int index,int size){
  
       for(int i = index; i<size; i++){

            arr[i] = arr[i+1];

       }

       --size;
       cout<<endl<<arr[index]<<" is deleted"<<endl;
}

int main(){
    int arr[100] = {5,10,20,25,30};
    int size =10;
    int capacity = 100;
    int index = 2;
    int element = 15;


    
    cout<<endl<<"array"<<endl;
    trav(arr,size); 
    insertion(arr ,size ,element, capacity, index);
    trav(arr,size);
    deleteElement(arr,index,size);
    trav(arr,size);
   
     return 0;
}
 