using namespace std;

#include <algorithm>

#include <iostream>

int main()
{
    long long Katryoshkas = 0;
    long long eyes, mouths, boodies;
    cin >> eyes >> mouths >> boodies;
    Katryoshkas = min({eyes, mouths, boodies});

    eyes -= Katryoshkas;
    mouths -= Katryoshkas;
    boodies -= Katryoshkas;

    Katryoshkas += min({eyes / 2, boodies});

    cout << Katryoshkas;
}
