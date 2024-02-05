#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    long long a, b, c, d;
    double x, y;
    cin >> a >> b >> c >> d;
    x = log(a) * (b);
    y = log(c) * (d);
    if (x > y)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}