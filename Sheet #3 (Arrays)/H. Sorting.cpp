#include <iostream>
using namespace std;

int main()
{
    int noi;
    cin >> noi;
    int myArr[noi];

    for (int i = 0; i < noi; i++)
    {
        cin >> myArr[i];
    }

    for (int i = 0; i < noi - 1; i++)
    {
        for (int j = 0; j < noi - i - 1; j++)
        {
            if (myArr[j] > myArr[j + 1])
            {

                int temp = myArr[j];
                myArr[j] = myArr[j + 1];
                myArr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < noi; i++)
    {
        cout << myArr[i] << " ";
    }

    return 0;
}
