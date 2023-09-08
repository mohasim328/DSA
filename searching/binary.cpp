#include<iostream>
using namespace std;

int Bainary(int arr[], int key ,int size){

    int start = 0;
    int end =size-1;
    
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==key){ return mid;}
        else if(arr[mid]>key){ end =mid-1;}
         else if(arr[mid]<key){ start =mid+1;}
    }
}

int main(){
    
    int Arr[]={1,3,5,7,9,11};
    int Key= 5;
    int Size = sizeof(Arr)/sizeof(Arr[0]);
    int ans = Bainary(Arr,Key,Size);
    cout<<"the element "<<Key<<" At position "<<ans+1<<endl;
    
return 0;

}