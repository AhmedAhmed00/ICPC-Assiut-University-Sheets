#include <iostream>
#include <string>
using namespace std;

int main()
{

    float x, y;
    cin >> x >> y;
    if (x == 0 && y == 0)
        cout << "Origem";
    else if (y == 0)
    {
        cout << "Eixo X";
    }
    else if (x == 0)
    {
        cout << "Eixo Y";
    }
    else if (x > 0)
    {
        (y > 0) ? cout << "Q1" : cout << "Q4";
    }
    else if (x > 0)
    {
        (y > 0) ? cout << "Q3" : cout << "Q2";
    }
    else
    {
        (y > 0) ? cout << "Q2" : cout << "Q3";
    }
}