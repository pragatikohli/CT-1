// Pragati Kohli
// 2010990534
// Set - 03
// G-09
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int target;
    cin >> target;
    bool flag = false;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "Pair found (" << arr[i] << ", " << arr[j] << ")" << endl;
                flag = true;
                break;
            }
        }
    }
    if (flag == false)
    {
        cout << "Pair not found";
    }
    return 0;
}