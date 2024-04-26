#include<iostream>
using namespace std;

int main(){

int row = 5, number=1;

for (int i = row; i >=1; i--)
{
    for (int j = 1; j <= i; j++)
    {
        cout<<number;
        number++;
    }

    cout<<endl;
    number = 1;
}


    return 0;

}