

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int x = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = x; j <= (x + 3); j++)
        {

            j == 3 + x ? cout << "PUM" : cout << j << " ";
        }
        x = x + 4;

        cout << endl;
    }
}
