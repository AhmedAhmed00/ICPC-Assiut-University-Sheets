using namespace std;

#include <algorithm>

#include <iostream>

int main()

{

    char c;
    cin >> c;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        for (int j = 0; j < x; j++)
        {
            cout << c;
        }
        cout << endl;
    }
}