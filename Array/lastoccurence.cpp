#include <iostream>
#include <vector>
using namespace std;

int lastOccurrence(vector<int>& arr, int x) {
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (arr[i] == x)
            return i;  // return index of last occurrence
    }
    return -1; // x not found
}

int main() {
    vector<int> arr = {1, 2, 3, 2, 4, 2, 5};
    int x = 2;

    cout << "Last occurrence of " << x << " is at index "
         << lastOccurrence(arr, x);

    return 0;
}