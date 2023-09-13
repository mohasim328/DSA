#include<iostream>
#include <cstring>
using namespace std;


class Hero{

private:
 int health ;
public:
 int level ;
 char *name;

  Hero(){
     cout<<"simple consractor is called"<<endl;
     name = new char[100];
  }

   Hero(int health){
     
     this->health =health;
  }

   Hero(int health,int level){
     
     this->health =health;
      this->level =level;
  }
 void printValue(){
    cout<<"[ Name : "<<this->name<<", ";
    cout<<"Health : "<<this->health<<", ";
    cout<<"Level : "<<this->level<<" ]";
    cout<<endl;
 }

  void setHealth(int h){
    health = h;
  }
  void setlevel(int l){
    level = l;
  }
   void setName(char name[]){
      strcpy(this->name, name);
  }

  int getHealth(){
    return health;
  }
  int getlevel(){
    return health;
  }

};
 
 int main(){

  Hero h1;
  h1.setHealth(80);
  h1.setlevel(6);
  char name[10] ="Mo Hasim";
  h1.setName(name);
  h1.printValue();

  Hero h2(h1);
  h2.printValue();

  h1.name[1]='D';
  h1.printValue();


 h2.printValue();

    return 0;
 }