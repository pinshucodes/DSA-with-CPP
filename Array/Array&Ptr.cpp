#include <iostream>
#include <vector>
using namespace std;

void display(int a[], int n) {
int* ptr = a;
cout << endl;
for (int i = 0; i < n; i++) {
cout << *ptr << "\n";
ptr += 1;
}
cout << endl;
}

int main() {
int n;
if (!(cin >> n)) return 0;
vector<int> arr(n);
for (int i = 0; i < n; i++) cin >> arr[i];
display(arr.data(), n);
return 0;
}