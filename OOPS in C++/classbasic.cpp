#include<iostream>
using namespace std;
 

 class Hero {

    private:
    int health;
    public:
    int level;
 
    void setHealth(int h){         //setter funtion
          health = h;
    }
    int getHealth(){             //getter function
         return health;

    }
     void setLevel(int l){    //setter funtion
          level = l;
    }
    int getLevel(){         //getter function
         return level;
         
    }
 };


 int main(){

    Hero h1;

   h1.setHealth(80);
   h1.setLevel(8);
   cout<<h1.getHealth()<<endl;
   cout<<h1.getLevel()<<endl;
 
 return 0;
 }