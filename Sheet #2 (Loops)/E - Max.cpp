using namespace std;

#include <algorithm>

#include <iostream>

int main()

{
    int count;
    int numbers;
    cin >> count;
    int max = 0;
    for (int i = 0; i < count; i++)
    {
        cin >> numbers;
        if (numbers > max)
        {
            max = numbers;
        }
    }
    cout << max;
}
