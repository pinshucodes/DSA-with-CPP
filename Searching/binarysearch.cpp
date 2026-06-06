#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 4, 5, 7, 9, 10, 13, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    int lo = 0;
    int hi = n - 1;
    int target = 9;
    int result = -1;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (target == arr[mid])
        {
            result = mid;
            break;
        }
        else if (target > arr[mid])
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    cout << result << endl;
    return 0;
}