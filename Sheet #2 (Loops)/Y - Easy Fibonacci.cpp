#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int n1 = 0, n2 = 1, n3;

    if (n == 1 || n == 0)
    {
        cout << 0;
    }
    else
    {
        cout << n1 << " " << n2 << " ";
        for (int i = 2; i < n; i++)
        {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
            cout << n3 << " ";
        }
    }
}