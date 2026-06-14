#include <bits/stdc++.h>
using namespace std;

int smallestMissingPositive(vector<int>& arr) {
    int missing = 1;

    for (int x : arr) {
        if (x == missing)
            missing++;
        else if (x > missing)
            return missing;
    }

    return missing;
}

int main() {
    vector<int> arr = {1, 2, 3, 5, 6};

    cout << "Smallest missing positive element = "
         << smallestMissingPositive(arr);

    return 0;
}