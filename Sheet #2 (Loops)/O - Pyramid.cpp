using namespace std;

#include <algorithm>

#include <iostream>

int main()

{

    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}