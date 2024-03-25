using namespace std;

#include <algorithm>

#include <iostream>

int main()

{

    int num;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (num == 1)
        {
            cout << -1;
            return 0;
        }
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
}
