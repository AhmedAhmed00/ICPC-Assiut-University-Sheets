#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{

    float number;
    int integral;
    cin >> number;
    integral = number;
    float result = number - integral;
    if (number - integral > 0)
    {
        cout << "float " << integral << " " << result;
    }
    else
        cout << "int " << number;
}