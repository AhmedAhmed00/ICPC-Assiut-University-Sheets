#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int size;
    cin >> size;
    int arr[size];
    int pal;
    for (size_t i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] != arr[size - i - 1])
        {
            pal = false;
            break;
        }
        else
        {
            pal = true;
        }
    }
    if (pal)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
