using namespace std;

#include <algorithm>

#include <iostream>

int main()

{
    int n1;
    int n2;
    int gdc = 0;
    cin >> n1 >> n2;
    int mn = min(n1, n2);
    for (int i = 1; i <= mn; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gdc = i;
        }
    }
    cout << gdc;
}
