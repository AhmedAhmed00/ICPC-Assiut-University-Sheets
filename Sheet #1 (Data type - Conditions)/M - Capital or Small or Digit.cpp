using namespace std;
#include <iostream>
#include <cmath>
#include <string>

int main()
{

    char ch;
    cin >> ch;
    for (int i = 48; i <= 57; i++)
    {
        if (ch == i)
        {
            cout << "IS DIGIT";
        }
    }
    for (int i = 65; i <= 90; i++)
    {
        if (ch == i)
        {
            cout << "ALPHA" << endl
                 << "IS CAPITAL";
        }
    }
    for (int i = 97; i <= 122; i++)
    {
        if (ch == i)
        {
            cout << "ALPHA" << endl
                 << "IS SMALL";
        }
    }
}