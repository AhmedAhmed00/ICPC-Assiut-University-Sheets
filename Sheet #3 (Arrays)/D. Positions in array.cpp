#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] <= 10)
        {
            cout << "A"
                 << "[" << i << "]"
                 << " = " << arr[i] << endl;
        }
    }
}

int main(int argc, char const *argv[])
{
    int size;
    cin >> size;
    int arr[size];
    for (size_t i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    printArr(arr, size);

    return 0;
}
