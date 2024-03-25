using namespace std;

#include <algorithm>

#include <iostream>

int main()

{

    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;
    int listItem;
    int count;
    cin >> count;

    for (int i = 0; i < count; i++)
    {

        cin >> listItem;
        if (listItem % 2 == 0)
        {
            even++;
        }

        else
        {
            odd++;
        }
        if (listItem > 0)
        {
            positive++;
        }
        else
        {
            if (listItem != 0)
            {
                negative++;
            }
        }
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
}
