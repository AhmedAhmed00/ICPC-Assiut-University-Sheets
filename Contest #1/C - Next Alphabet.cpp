#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    char next_ch;
    if (ch == 90)
    {
        next_ch = 65;
    }
    else if (ch == 122)
    {
        next_ch = 97;
    }
    else
    {
        next_ch = ch + 1;
    }
    cout << next_ch;
}