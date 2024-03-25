using namespace std;

#include <algorithm>

#include <iostream>

int main()

{
    int a, b;
    int c = 0;

    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        int lucky = 0;
        int x = i;
        while (x)
        {
            if (x % 10 != 4 && x % 10 != 7)
                lucky++;
            x = x / 10;
        }
        if (lucky == 0)
        {
            cout << i << " ";
            c++;
        }
    }
    if (c == 0)
    {
        cout << -1;
    }
}