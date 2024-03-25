using namespace std;

#include <algorithm>

#include <iostream>

int main()

{

    int correctPass = 1999;
    int userInput = 0;

    while (userInput != correctPass)
    {
        cin >> userInput;
        if (userInput != correctPass)
        {
            cout << "Wrong" << endl;
        }
        else
        {
            cout << "Correct";
        }
    }
}
