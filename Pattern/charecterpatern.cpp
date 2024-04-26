#include<iostream>
using namespace std;

int main(){

  int number =65,row = 5;


  for (int i = 1; i<=row; i++)
{
    for (int j = 1; j <= i; j++)
    {

        char ch = number;
        cout<<ch<<" ";
        number++;
    }

    cout<<endl;
    
}

cout<<"other pyramid"<<endl;

number = 65;

  for (int i = 1; i<=row; i++)
{
    for (int j = 1; j <= i; j++)
    {

        char ch = number;
        cout<<ch<<" ";
        number++;
    }

    cout<<endl;
    number = 65;
}



cout<<"other pyramid"<<endl;

number = 65;

  for (int i = 1; i<=row; i++)
{
    for (int j = 1; j <= i; j++)
    {

        char ch = number;
        cout<<ch<<" ";
        
    }

    cout<<endl;
    number++;
}


    return 0;
}