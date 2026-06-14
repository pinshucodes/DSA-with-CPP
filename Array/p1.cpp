// Given an array of integers, change the value of all odd indexed elements to its second multiple
// and increment all even indexed values by 10.

#include <iostream>
#include <vector>
using namespace std;

void modifyArray(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        if (i % 2 == 0) {      // even index
            arr[i] += 10;
        } else {               // odd index
            arr[i] *= 2;
        }
    }
}

int main() {
    vector<int> arr = {5, 8, 3, 6, 2};

    modifyArray(arr);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}