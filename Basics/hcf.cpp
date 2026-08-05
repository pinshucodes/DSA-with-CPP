#include<iostream>
using namespace std;
// brute force approach -- time complexity = O(min(a,b))
int hcf(int a, int b) {
    for (int i = min(a, b); i >= 1; i--) {
        if (a % i == 0 && b % i == 0)
            return i;
    }
    return 1;
}
// most optimised approach
// iterative euclidean approach -- time complexity = O(log(min(a,b)))
int Optimiesd_hcf(int a, int b) {
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main() {
    int a, b;
    cout << "\nEnter The First Number :\n";
    cin >> a;
    cout << "\nEnter The Second Number\n";
    cin >> b;
    cout << "\nTheir Highest Common Factor Is : " << hcf(a, b) << "\n\n";
    return 0;
}