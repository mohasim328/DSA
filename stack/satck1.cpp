#include<iostream>
using namespace std;

int stack[5] ,n=5, top= -1;

void push(int val){

    if(top>=n-1){

        cout<<"Stack is overflow"<<endl;

    }
    else{
      top++;

        stack[top] +=val;
        cout<<"The element "<<val<<" is inserted"<<endl;
    }

}
void pop(){

     if(top<=-1){
        cout<<"stack is underflow"<<endl;

     }
     else{
       cout<<"The pop element is "<<stack[top]<<endl;
        top--;
     }

}

void display(){

 if(top>=0){
    cout<<"the elements in stack are :- ";
    for(int i=top;i>=0;i--){
       
      cout<<stack[i] <<" ";
    }
    cout<<endl;

  }
  
  else{
    cout<<"stack is empty"<<endl;
 }


}
void isfull(){

    if(top == n-1){
        cout<<"Stack is  full"<<endl;
    }
    else{
        cout<<"stack is not full "<<endl;
    }

}
int main(){

   int choice ,val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack elements "<<endl;
   cout<<"4) ckeck full or not"<<endl;
   cout<<"5)exit"<<endl;


   do{
     cout<<"enter the choie :- ";
     cin>>choice;
       switch(choice){
 
            case 1:
           { cout<<"Enter the value of element : ";
            cin>>val;
            push(val);
              break;}

            case 2:
           { pop();
            break;}

            case 3:
           { display();
            break;}

            case 4:
            {isfull();
            break;}
             
             case 5:{
                  cout<<"Exit"<<endl;
                     break;
                  }

             default:{
                 cout<<"envalid choice"<<endl;
                 }

       }

   }while(choice!=5);

     return 0;
}
