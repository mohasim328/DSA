#include <iostream>
using namespace std;

int reverseInteger(int x)
{

    int reversed = 0, r;
    while (x != 0)
    {

        r = x % 10;
        reversed = (reversed * 10) + r;
        x = x / 10;
    }
    return reversed;
}

int main()
{

    int x = 122345;

    int ans = reverseInteger(x);

    cout << "the answer is " << ans << endl;

    return 0;
}
