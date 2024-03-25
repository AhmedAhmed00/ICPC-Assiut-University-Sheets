using namespace std;

#include <algorithm>

#include <iostream>

int main()

{

    int reversed_num = 0;
    int number;
    cin >> number;
    int copy_of_num;
    copy_of_num = number;

    int last_digit = 0;
    reversed_num = 0;

    while (copy_of_num != 0)
    {
        last_digit = copy_of_num % 10;
        reversed_num = reversed_num * 10 + last_digit;
        copy_of_num = copy_of_num / 10;
    }
    cout << reversed_num << endl;
    if (reversed_num == number)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
