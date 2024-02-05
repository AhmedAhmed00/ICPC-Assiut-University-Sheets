
using namespace std;
#include <iostream>
#include <cmath>

int main()
{

    int a, b, c;

    cin >> a >> b >> c;
    int x = min(a, b);
    cout << min(x, c) << " ";
    int z = max(a, b);
    cout << max(z, c);
}