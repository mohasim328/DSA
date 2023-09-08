#include <iostream>
using namespace std;


// simple inheritance with private accsess specifier getter and setter 
class Animal
{
private:
    string name;
    int leg;

public:
    void setValue(string name, int leg)
    {
        this->name = name;
        this->leg = leg;
    }

    void getValue()
    {
        cout << this->name << endl;
        cout << this->leg << endl;
    }
};

int main()
{
    Animal tiger;
    tiger.setValue("tiger",4);
    tiger.getValue();
}
