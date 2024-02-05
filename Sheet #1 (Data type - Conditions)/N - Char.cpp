using namespace std;
#include <iostream>
#include <cmath>
#include <string>

int main()
{

    char ch;
    cin >> ch;

    for (int i = 65; i <= 90; i++)
    {
        if (ch == i)
        {
            ch += 32;
            cout << ch;
            ch = 0;
        }
    }

    for (int i = 97; i <= 122; i++)
    {
        if (ch == i)
        {
            ch -= 32;
            cout << ch;
        }
    }
}