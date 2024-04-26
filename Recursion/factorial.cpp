#include <iostream>
using namespace std;

long factorial(int n)
{

    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n;

    cout << "enter a number for the factorial" << endl;
    cin >> n;

    long ans = factorial(n);

    cout << "The factorial is " << ans << endl;

    return 0;
}
