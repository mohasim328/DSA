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
        cout << a << endl;
        cout << b << endl;
    }
};

int main()
{

    A2 obj;

    obj.setvalue(5, 100);

    obj.getvalue();

    return 0;
}