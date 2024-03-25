#include <iostream>
using namespace std;

int *replacement(int arr[], int size)
{
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            arr[i] = 1;
        }
        else if (arr[i] < 0)
        {
            arr[i] = 2;
        }
        if (arr[i] == 0)
        {
            arr[i] = 0;
        }
    }
    return arr;
}

int main(int argc, char const *argv[])
{
    int size;
    cin >> size;
    int my_arr[size];
    int n;
    for (size_t i = 0; i < size; i++)
    {
        cin >> my_arr[i];
    }
    replacement(my_arr, size);

    for (size_t i = 0; i < size; i++)
    {
        cout << my_arr[i] << " ";
    }

    return 0;
}
