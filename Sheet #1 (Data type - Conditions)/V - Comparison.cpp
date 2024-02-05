#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{

    int x;
    int y;
    char op;
    int res;
    cin >> x >> op >> y;
    if (op == '>' && x > y)
    {
        cout << "Right";
    }
    else if (op == '<' && x < y)
    {
        cout << "Right";
    }
    else if (op == '=' && x == y)
    {
        cout << "Right";
    }
    else
        cout << "Wrong";
}