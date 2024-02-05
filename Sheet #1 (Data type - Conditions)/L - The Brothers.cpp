using namespace std;
#include <iostream>
#include <cmath>
#include <string>

int main()
{

    string firstperson;
    string s1, s2;
    cin >> s1 >> s2;
    firstperson = s1, s2;
    string secondperson;
    string p1, p2;
    cin >> p1 >> p2;
    secondperson = p1 + p2;
    if (s2 == p2)
    {
        cout << "ARE Brothers";
    }
    else
        cout << "NOT";
}
