#include <iostream>
using namespace std;

void get_lowest(int arr[], int size)
{
    int lowest = INT_MAX;
    int index;
    for (size_t i = 0; i < size; i++)
    {

        if (arr[i] < lowest)
        {
            lowest = arr[i];
            index = i + 1;
        }
    }

    cout << lowest << " " << index;
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
    get_lowest(arr, size);

    return 0;
}
