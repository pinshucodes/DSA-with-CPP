//If an array arr contains n elements, then check if the given array is a palindrome or not .

#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        if (arr[left] != arr[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    vector<int> arr = {1, 2, 3, 2, 1};

    if (isPalindrome(arr))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}