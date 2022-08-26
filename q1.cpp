// Pragati Kohli
// 2010990534
// Set - 03
// G-09
#include <iostream>
using namespace std;
void rearrange(int arr[], int n)
{
    for (int i = 0; i < n - 1; i = i + 2)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    // odd length
    if (n & 1)
    {
        for (int i = n - 1; i >= 0; i = i - 2)
        {
            if (arr[i] > arr[i - 1])
            {
                swap(arr[i], arr[i - 1]);
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rearrange(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}