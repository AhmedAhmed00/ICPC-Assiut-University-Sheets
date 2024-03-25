#include <iostream>
using namespace std;

int main()
{

    long long sum = 0;
    int n;
    cin >> n;
    long long nums;
    for (size_t i = 0; i < n; i++)
    {
        cin >> nums;
        sum += nums;
    }
    sum > 0 ? cout << sum : cout << sum * -1;
}
