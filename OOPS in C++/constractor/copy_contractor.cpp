#include<iostream>
#include <cstring>
using namespace std;


class Hero{

private:
 int health ;
public:
 int level ;

   Hero(){
     cout<<"simple constractor"<<endl;
  }

   Hero(int health){
     this->health =health;
  }

   Hero(int health,int level){
     
     this->health =health;
      this->level =level;
  }

   Hero(Hero& temp){  
      cout<<"copy constractor called"<<endl;
     this->health =temp.health;
     this->level =temp.level;
  }


 void printValue(){
   
    cout<<"Health : "<<this->health<<endl;
    cout<<"Level : "<<this->level<<endl;
   
 }

  void setHealth(int h){
    health = h;
  }
  void setlevel(int l){
    level = l;
  }
  

  int getHealth(){
    return health;
  }
  int getlevel(){
    return health;
  }

};
 
 int main(){

  Hero hasim(80,5);
  hasim.printValue();

  Hero kasim(hasim);
  kasim.printValue();




    return 0;
 }