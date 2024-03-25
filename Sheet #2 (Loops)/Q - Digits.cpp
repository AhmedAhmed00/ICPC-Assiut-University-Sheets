using namespace std;

#include <algorithm>

#include <iostream>

int main()

{

    // int n;

    // cin >> n;
    // for (int i = n; i >= 0 ; i--)
    //{
    //	for (int j = 0; j < i; j++)
    //	{
    //		cout << "*";

    //	}
    //	cout<<endl;

    //}

    int number_of_elements;
    cin >> number_of_elements;
    int number;
    int copy_of_number = 0;

    for (int i = 0; i < number_of_elements; i++)
    {
        cin >> number;
        copy_of_number = number;
        int digits;
        if (number == 0)
        {
            cout << 0;
        }
        else
        {
            while (copy_of_number)
            {
                digits = copy_of_number % 10;
                copy_of_number /= 10;
                cout << digits << " ";
            }
        }

        cout << endl;
    }
}