using namespace std;
#include <iostream>
#include <cmath>
#include <string>

int calc(int a, char b, int c)
{
    int sum;
    if (b == '+')
    {
        sum = a + c;
        return sum;
    }

    if (b == '*')
    {
        sum = a * c;
        return sum;
    }
    else if (b == '-')
    {
        sum = a - c;
        return sum;
    }
    else if (b == '/')
    {
        sum = a / c;
        return sum;
    }
}

int main()
{

    int a, c;
    char b;
    cin >> a >> b >> c;
    cout << calc(a, b, c);
}