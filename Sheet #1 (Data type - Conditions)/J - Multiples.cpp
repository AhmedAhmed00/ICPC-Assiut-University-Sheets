using namespace std;
#include <iostream>

void mult(int a, int b)
{
    if (a % b == 0 || b % a == 0)
    {
        cout << "Multiples" << endl;
    }
    else
    {
        cout << "No Multiples" << endl;
    }
}

int main()
{

    int x, y;
    cin >> x >> y;
    mult(x, y);
}