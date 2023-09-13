#include <iostream>
using namespace std;
// simple inheritance   protected specifier Gettwer and setter................
class A1
{

protected:
    int a, b;

public:
    void setvalue(int X1, int X2)
    {
        a = X1;
        b = X2;
    }
};
class A2 : public A1
{

public:
    void getvalue()
    {
        cout <<"the value of a : "<< a << endl;
        cout <<"the value of b : " <<b << endl;
    }
};

int main()
{

    // static allocation
    A2 obj;
    obj.setvalue(5, 100);
    obj.getvalue();


   // dynamic allocation
    A2 *obj1 = new A2;
    obj1->setvalue(6,110);
    obj1->getvalue();


   A2 *obj2 = new A2;
     (*obj2).setvalue(7,120);
    (*obj2).getvalue();

    return 0;
}