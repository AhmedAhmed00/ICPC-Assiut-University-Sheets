using namespace std;
#include <iostream>

int main()
{
    float x;
    float y;
    cin >> x >> y;
    float floor;
    floor = x / y;
    cout << "floor " << x << " / " << y << " = " << (int)floor << endl;
    float ciel;
    if (floor > (int)floor)
    {
        floor = (int)floor + 1;
        cout << "ceil " << x << " / " << y << " = " << floor << endl;
    }
    else
        cout << "ceil " << x << " / " << y << " = " << floor << endl;

    int round;
    float sum;
    round = x / y;
    sum = x / y;
    if (sum - round > 0.5)
    {
        round++;
        cout << "round " << x << " / " << y << " = " << round;
    }
    else if (sum - round == 0.5)
    {
        round++;
        cout << "round " << x << " / " << y << " = " << round;
    }
    else if (sum - round < 0.5)
    {
        cout << "round " << x << " / " << y << " = " << round;
    }
}
