using namespace std;
#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{

    double radious = 3.141592653;
    double r;
    cin >> r;
    r *= r;
    double area;
    area = radious * r;
    cout << fixed << setprecision(9) << area;
}