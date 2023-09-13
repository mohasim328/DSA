#include<iostream>
using namespace std;
  
class Hero 
{
  public:
    Hero(){
        cout<<"hello bhai"<<endl;
    }
  int i = 8;
};

int main(){

    Hero *h1 = new Hero();

    cout<<*h1<<endl;
    cout<<h1<<endl;

int b=5;
    int *i = &b;
    cout<<i<<endl;
    cout<<*i<<endl;
}
