using namespace std;

#include <algorithm>
#include <iostream>

int main()

{

    int cases;
    cin >> cases;

    for (int i = 0; i < cases; i++)
    {

        int n1, n2;
        cin >> n1 >> n2;
        int mn = min(n1, n2);
        int mx = max(n1, n2);
        int sum = 0;

        for (int j = mn + 1; j < mx; j++)
        {

            if (j % 2 != 0)
            {
                sum += j;
            }
        }
        cout << sum << endl;
    }
}