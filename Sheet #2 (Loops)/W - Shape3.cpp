#include <iostream>
using namespace std;

int main()
{
    int rows, stars, spaces;
    cin >> rows;
    spaces = rows - 1;
    stars = 1;

    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < spaces; j++)
        {
            cout << " ";
        }
        for (size_t j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
        stars += 2;
        spaces--;
    }
    spaces++;
    stars -= 2;

    for (size_t i = rows; i > 0; i--)
    {

        for (size_t j = 0; j < spaces; j++)
        {
            cout << " ";
        }
        for (size_t j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
        spaces++;
        stars -= 2;
    }
}
