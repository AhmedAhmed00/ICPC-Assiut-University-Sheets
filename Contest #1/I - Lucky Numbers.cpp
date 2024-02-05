using namespace std;

#include <algorithm>

#include <iostream>

int main()

{

    int x;
    cin >> x;

    int n1 = x / 10;
    int n2 = x % 10;

    if (n2 == 0)
    {
        cout << "YES";
    }

    else if (n1 != 0 && max(n1, n2) % min(n1, n2) == 0)
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
    }
}
