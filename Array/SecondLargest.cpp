#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int>& arr) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int x : arr) {
        if (x > largest) {
            secondLargest = largest;
            largest = x;
        }
        else if (x > secondLargest && x != largest) {
            secondLargest = x;
        }
    }

    return secondLargest;
}

int main() {
    vector<int> arr = {12, 35, 1, 10, 34, 1};

    cout << secondLargest(arr);
}