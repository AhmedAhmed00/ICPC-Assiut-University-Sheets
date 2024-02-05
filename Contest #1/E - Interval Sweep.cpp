#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    if (abs(n1 - n2) >= 2 || (n1 == 0 && n2 == 0))
    {
        cout << "NO";
    }
    else
        cout << "YES";
}