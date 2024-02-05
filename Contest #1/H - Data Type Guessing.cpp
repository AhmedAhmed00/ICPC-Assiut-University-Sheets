using namespace std;

#include <algorithm>

#include <iostream>

int main()
{

    double a, b, c;
    cin >> a >> b >> c;
    double res = (a * b) / c;
    long long x = res;

    if (res > 2147483647 && res - x == 0)
    {
        cout << "long long";
    }
    else if (res - x > 0)
    {
        cout << "double";
    }

    else if (res - x == 0)
    {

        cout << "int";
    }
}
