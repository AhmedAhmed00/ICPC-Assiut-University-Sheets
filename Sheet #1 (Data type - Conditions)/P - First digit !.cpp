
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x;
    cin >> x;
    while (x > 9)
    {
        x = x / 10;
    }

    if (x % 2 == 0)
    {
        cout << "EVEN";
    }

    else
        cout << "ODD";
}
