#include <iostream>
using namespace std;

int main()
{
    int num_of_items;
    cin >> num_of_items;
    int myArr[num_of_items];

    for (int i = 0; i < num_of_items; i++)
    {
        cin >> myArr[i];
    }

    for (int i = 0; i < num_of_items - 1; i++)
    {
        for (int j = 0; j < num_of_items - i - 1; j++)
        {
            if (myArr[j] > myArr[j + 1])
            {

                int temp = myArr[j];
                myArr[j] = myArr[j + 1];
                myArr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < num_of_items; i++)
    {
        cout << myArr[i] << " ";
    }

    return 0;
}
