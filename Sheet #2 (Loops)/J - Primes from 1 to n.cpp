using namespace std;

#include <algorithm>

#include <iostream>

int main()

{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int counter = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                counter++;
            }
        }
        if (counter == 2)
        {
            cout << i << " ";
        }
    }
}
