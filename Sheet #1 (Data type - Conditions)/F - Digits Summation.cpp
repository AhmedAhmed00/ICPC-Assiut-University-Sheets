using namespace std;
#include <iostream>
#include <iomanip>
#include <cmath>

long long lastdigit(long long &n)
{
    while (n >= 10)
    {
        n = n % 10;
    }
    return n;
}
long long firstdigit(long long &n)
{
    while (n >= 10)
    {
        n = n / 10;
    }
    return n;
}

int main()
{

    long long n;
    long long m;
    cin >> n;
    cin >> m;
    cout << lastdigit(n) + lastdigit(m) << endl;
}
