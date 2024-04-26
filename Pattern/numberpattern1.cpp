#include<iostream>
using namespace std;
 int main(){

    int row=5, number = 1;


    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<number<<" ";
            number++;
        }
        cout<<endl;
    }
    

    // other pyramid
cout<<"other pyramid "<<endl;

    number = 1;
     for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<number<<" ";
            
        }
        cout<<endl;
        number++;
    }

// other pyramid 

cout<<"other pyramid "<<endl;

      number = 1;
     for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<number<<" ";
            number++;
        }
        cout<<endl;
        number=1;
    }

    return 0;
 }