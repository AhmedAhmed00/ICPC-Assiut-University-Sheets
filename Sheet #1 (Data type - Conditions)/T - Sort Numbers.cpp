#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void sort(int a, int b, int c)
{

    int arr[3] = {a, b, c};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    sort(a, b, c);
    cout << a << endl
         << b << endl
         << c;
}