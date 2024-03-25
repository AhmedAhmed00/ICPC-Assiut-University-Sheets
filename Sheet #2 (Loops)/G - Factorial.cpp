using namespace std;

#include <algorithm>

#include <iostream>

int main()

{

    int cases;
    cin >> cases;

    long long num;

    for (int i = 0; i < cases; i++)
    {
        long long factoril = 1;

        cin >> num;
        for (int j = 1; j <= num; j++)
        {

            factoril *= j;
        }
        cout << factoril << endl;
    }
}
