#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;
    n1 %= 100;
    n2 %= 100;
    n3 %= 100;
    n4 %= 100;
    int r = n1 * n2 * n3 * n4;
    if (r % 100 <= 9)
    {
        cout << 0;
        cout << r % 100;
    }
    else
    {
        cout << r % 100;
    }
}