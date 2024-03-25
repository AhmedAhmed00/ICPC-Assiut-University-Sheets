#include <iostream>
using namespace std;

int *reverse(int arr[], int size)
{
    int last_Element_index = size - 1;
    for (size_t i = 0; i < size / 2; i++)
    {
        if (i != last_Element_index)
        {
            int temp = arr[i];
            arr[i] = arr[last_Element_index];
            arr[last_Element_index] = temp;
            last_Element_index--;
        }
    }
    return arr;
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
    reverse(arr, size);
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
