#include <iostream>
using namespace std;

long factorial(int n)
{

    long fact = 1.0;

    if (n < 0)
    {

        // cout<<"negetive number is not allowed"<<endl;
        return -1;
    }

    else
    {

        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }

        //    cout<<"the factorial is "<<fact<<endl;

        return fact;
    }
}

int main()
{

    int n;
    cout << "enter a number for factorial" << endl;
    cin >> n;

    long ans = factorial(n);

    cout << ans;

    return 0;
}