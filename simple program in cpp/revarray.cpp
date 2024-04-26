#include<iostream>
#include<math.h>
using namespace std;
void revrsearr(int arry[],int n){

    int start=0;
    int last=n-1;
    
    while(start != last){
        swap(arry[start],arry[last]);
        start++;
        last--;
    }

}
void printarr( int arr1[], int n){
 for(int i =0;i<n;i++){
cout<<arr1[i]<<" ";

 }
 cout<<endl;
}

int main(){
   int array[]={1,2,3,4,5,6,7,8,9};
   int s =sizeof(array)/sizeof(array[0]);
   printarr(array,s);
   revrsearr(array,s);
  printarr(array,s);
  

   return 0;
}