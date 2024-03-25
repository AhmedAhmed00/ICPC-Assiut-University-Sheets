#include <iostream>

using namespace std;

int main()
{
    int k, s;
    int counter = 0;
    cin >> k >> s; // 2 1
    for (int x = 0; x <= k; x++)
    {
        for (int y = 0; y <= k; y++)
        {

            if (s - x - y >= 0 && s - x - y <= k)
            {
                counter++;
            }
        }
    }
    cout << counter;

    return 0;
}
