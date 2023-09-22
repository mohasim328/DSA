#include<iostream>
using namespace std;


class Stack{

  public:
  int *arr;
  int top;
  int size;

  Stack(int size){
        this->size = size;
        top = -1;
        arr = new int[size];
  } 

  void push(int element){
    if(size-top > 1){
        top++;
       arr[top]= element;
    }
    else{
      cout<<"stack is overflow"<<endl;
    }
  }

  void pop(){
    if(top>=0){
        top--;
    }
    else{
        cout<<"stack is underflow"<<endl;
    }
  }

  int peak(){
    if((top>=0) && (top<size)){
        return arr[top];
    } 
    else{
        cout<<"stack is empty"<<endl;
        return -1;

    }
  }

  bool isempty(){
    if(top < 0){
        return true;
    }
    else{
        return false;
    }
  }
  bool isfull(){
    if(top == size-1){
        return true;
    }
    else{
        return false;
    }
  }

 

};

int main(){

Stack s(10);

s.push(50);
s.push(60);
s.push(70);
s.push(80);
s.push(50);
s.push(60);
s.push(70);
s.push(80);

cout<<s.isfull()<<endl;
cout<<s.peak()<<endl;
s.pop();
cout<<s.isfull()<<endl;
cout<<s.peak()<<endl;

 return 0;

}
