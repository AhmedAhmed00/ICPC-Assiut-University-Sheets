#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{

    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long f, l;
    if ((a > c && a > d) || (c > b && d > b))
    {
        cout << -1;
        return 0;
    }
    if (a > c)
    {
        f = a;
    }
    else
    {
        f = c;
    }
    if (b > d)
    {
        l = d;
    }
    else
    {
        l = b;
    }
    cout << f << " " << l;
}