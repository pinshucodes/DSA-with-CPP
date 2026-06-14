// Find the unique number in a given Array where all the elements are being repeated twice with one
// value being unique.

#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int>& arr) {
    int ans = 0;

    for (int x : arr) {
        ans ^= x;
    }

    return ans;
}

int main() {
    vector<int> arr = {2, 3, 5, 4, 5, 3, 4};

    cout << findUnique(arr);

    return 0;
}