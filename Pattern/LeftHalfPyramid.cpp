#include<iostream>
using namespace std;


int main (){

 int row  = 5;


 for (int i =  row ;i > 0 ; i--)
 {
    for (int j = 0; j <= row; j++)
    {
        if(j>= i){
            cout<<"*";
        }
        else{
            cout<<" ";
        }

    }

    cout<<endl;
    
 }
 




    return 0;

}