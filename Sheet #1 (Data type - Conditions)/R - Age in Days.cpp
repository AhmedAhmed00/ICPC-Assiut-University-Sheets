#include <iostream>
#include <string>
using namespace std;

int main()
{

    int alldays;
    cin >> alldays;
    int years;
    years = alldays / 365;
    cout << years << " years\n";
    int months;
    months = (alldays - (years * 365)) / 30;
    cout << months << " months\n";
    int days;
    days = (alldays - (years * 365)) - months * 30;
    cout << days << " days";
}