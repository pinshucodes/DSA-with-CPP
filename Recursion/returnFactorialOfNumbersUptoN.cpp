#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

void printFactorials(int i, int n) {
    if (i > n)
        return;

    cout << i << "! = " << factorial(i) << endl;

    printFactorials(i + 1, n);
}

int main() {
    int n;

    cout << "Enter n: ";
    cin >> n;

    printFactorials(1, n);

    return 0;
}