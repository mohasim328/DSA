#include<iostream>
using namespace std;

// simple inheritanvce........................
  class Animal{

    public:
    void eat(){

        cout<<"eating..........."<<endl;
    }
  };

class Dog : public Animal{
public:
    void bark(){
        cout<<"barking............"<<endl;
    }

};

int main(){

Dog a;
a.bark();

a.eat();

    return 0;

}