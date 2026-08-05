#include <iostream>
#include <algorithm>
using namespace std;

bool dup(int arr[], int n) {
    sort(arr, arr + n);

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            return true;
        }
    }

    return false;
}

int main() {
    int arr[] = {1,2,3,5,4,7,8,9,10};

    int s = sizeof(arr) / sizeof(arr[0]);

    cout << dup(arr, s);

    return 0;
}