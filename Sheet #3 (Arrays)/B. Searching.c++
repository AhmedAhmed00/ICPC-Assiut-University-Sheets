#include <iostream>
using namespace std;

// if exist print the position
// not exsit print -1

int main(int argc, char const *argv[])
{
    int num_of_elem;
    cin >> num_of_elem;
    int arr[num_of_elem];
    for (size_t i = 0; i < num_of_elem; i++)
    {
        int index;
        cin >> index;
        arr[i] = index;
    }
    int num_to_srch;
    cin >> num_to_srch;
    int flag = -1;
    for (size_t i = 0; i < num_of_elem; i++)
    {
        if (arr[i] == num_to_srch)
        {
            flag = i;
            break;
        }
    }
    cout << flag;

    return 0;
}
