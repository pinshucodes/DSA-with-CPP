#include <iostream>
using namespace std;

int hcf(int a, int b) {
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / hcf(a, b)) * b;
}

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "LCM = " << lcm(a, b);

    return 0;
}