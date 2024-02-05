#include <iostream>
using namespace std;

int main()
{

    float discount;
    float price_after_dis;
    cin >> discount >> price_after_dis;
    discount = discount / 100;

    float resault = price_after_dis / (1 - discount);
    cout << resault;
}