#include <iostream>
using namespace std;

void swapp(int& a, int& b) {
    int temp;
    temp=a;
    b=a;
    a=temp;
    return;
}



int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    swapp(a,b);
    cout<<"a:"<<a << "b:"<<b<<endl;

    return 0;
}