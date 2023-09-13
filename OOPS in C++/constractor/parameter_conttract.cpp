#include<iostream>
using namespace std;


class Hero{

private:
 int health ;
 int level ;

public:

 Hero(int health){

     this->health =health;

  }
  Hero(int health, int level){

     this->health =health;
     this->level =level;
  }

 void printValue(){

    cout<<"Health : "<<health<<endl;
    cout<<"Level : "<<level<<endl;
 }


};
 
 int main(){

   Hero *h1 =new Hero(80,7);
     h1->printValue();

     Hero *h2 =new Hero(81);
     h2->printValue();
    return 0;
 }