#include <iostream>

using namespace std;

#include <cmath>

int main()
{

    int x;
    cin >> x;
    while (x--)
    {
        int num;
        long long sum = 0;
        int p = 0;
        cin >> num;
        while (num != 0)
        {
            int quotient = num % 2;
            num /= 2;
            if (quotient == 1)
            {
                sum += pow(2, p);
                p++;
            }
        }
        cout << sum << endl;
    }
}
