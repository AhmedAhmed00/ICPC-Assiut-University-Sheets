using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{

    /*       SOLUTION A - USING VECTOR           */

    int num_of_elements;
    int test_cases;
    cin >> test_cases;

    for (size_t k = 0; k < test_cases; k++)
    {
        cin >> num_of_elements;

        vector<int> arr(num_of_elements);

        for (size_t j = 0; j < num_of_elements; j++)
        {
            cin >> arr[j];
        }
        vector<int> sums;
        int temp = 0;

        for (size_t i = 0; i < num_of_elements; i++)
        {
            for (size_t j = i + 1; j < num_of_elements; j++)
            {
                temp = arr[i] + arr[j] + j - i;
                sums.push_back(temp);
            }
        }
        auto min = min_element(sums.begin(), sums.end());
        cout << *min << endl;
        sums.clear();
    }

    /*       SOLUTION B - USING ARRAY (DYNAMIC MEMORY ALLOCATION)           */

    /*
        int num_of_elements;
        int test_cases;
        cin >> test_cases;

        for (size_t k = 0; k < test_cases; k++)
        {
            cin >> num_of_elements;

            int *arr = new int[num_of_elements];

            for (size_t j = 0; j < num_of_elements; j++)
            {
                cin >> arr[j];
            }
            int sum = INT_MAX;
            int temp = 0;

            for (size_t i = 0; i < num_of_elements; i++)
            {
                for (size_t j = i + 1; j < num_of_elements; j++)
                {
                    temp = arr[i] + arr[j] + j - i;
                    if (temp < sum)
                    {
                        sum = temp;
                    }
                }
            }
            cout << sum << endl;
        }
    */
   
}
