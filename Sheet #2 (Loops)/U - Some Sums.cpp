

#include <iostream>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int digit = 0;
    int copy = 0;

    int sum_all = 0;
    for (int i = 1; i <= n; i++)
    {
        copy = i;

        int sum_digit = 0;

        while (copy != 0)
        {
            digit = copy % 10;
            sum_digit += digit;
            copy /= 10;
        }

        if (sum_digit >= a && sum_digit <= b)
        {
            sum_all += i;
        }
    }
    cout << sum_all;
}
