#include <iostream>  
using namespace std;  

int myFunction(int myNumbers[],int key) {
  for (int i = 0; i < 5; i++) { 
  if(myNumbers[i]==key){
   return i;

       }
  
  } 
  return -1 ;
}

int main() {  
  int myNumbers[5] = {10, 20, 30, 40, 50}; 
  int key;
  cout<<"enter the elemant you want search"<<endl;
  cin>>key;
  
  int result = myFunction(myNumbers , key);
  cout<<"position is "<<result+1<<" of elemant "<<myNumbers[result];
  return 0;
}  
