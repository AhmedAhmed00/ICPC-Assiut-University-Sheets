using namespace std;

#include <algorithm>
#include <iostream>

int main()

{

    while (true)
    {
        int n1, n2;
        cin >> n1 >> n2;
        int mn = min(n1, n2);
        int mx = max(n1, n2);
        int sum = 0;
        if (mn <= 0 || mx <= 0)
        {
            return 0;
        }

        else
        {
            for (int i = mn; i <= mx; i++)
            {

                cout << i << " ";
                sum += i;
            }
            cout << "sum =" << sum << endl;
        }
    }
}