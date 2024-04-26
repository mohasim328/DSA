#include <iostream>
using namespace std;

bool evenOddchecker(int n)
{

    if (n % 2 == 0)
    {
        return true;
    }

    return false;
}

int main()
{

    int n;
    cout << "Enter an number " << endl;
    cin >> n;

    bool ans = evenOddchecker(n);

    cout<<ans<<endl;
    return 0;
}