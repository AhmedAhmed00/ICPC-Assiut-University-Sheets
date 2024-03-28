#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int num_of_el;
    cin >> num_of_el;
    vector<int> v(num_of_el);
    for (size_t i = 0; i < num_of_el; i++)
    {
        cin >> v.at(i);
    }

    auto min = min_element(v.begin(), v.end());
    auto max = max_element(v.begin(), v.end());
    int min_index, max_index;

    for (size_t i = 0; i < num_of_el; i++)
    {
        if (v.at(i) == *min)
        {
            min_index = i;
        }
        else if (v.at(i) == *max)
        {
            max_index = i;
        }
    }

    swap(v[min_index], v[max_index]);

    for (size_t i = 0; i < num_of_el; i++)
    {
        cout << v.at(i) << "\t";
    }
}
