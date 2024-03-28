#include <iostream>
using namespace std;

int main()
{
    int num_of_el;
    cin >> num_of_el;

    string number;
    cin >> number;
    int sum = 0;

    for (size_t i = 0; i < num_of_el; i++)
    {
        sum += number[i] - '0';
    }
    cout << sum;


}