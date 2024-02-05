#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{

    int x;
    int y;
    int sum1;
    char op1;
    char op2;
    int sum2;
    cin >> x >> op1 >> y >> op2 >> sum1;
    if (op1 == '+')
    {
        sum2 = x + y;
        (sum2 == sum1) ? cout << "Yes" : cout << sum2;
    }
    else if (op1 == '*')
    {
        sum2 = x * y;
        (sum2 == sum1) ? cout << "Yes" : cout << sum2;
    }
    else if (op1 == '-')
    {
        sum2 = x - y;
        (sum2 == sum1) ? cout << "Yes" : cout << sum2;
    }
}