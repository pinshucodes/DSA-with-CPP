// lexographicalsorting -- sorting by their ascii value

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    // getline(cin,s);
    cin>>s;
    sort(s.begin(),s.end());
    cout<<s;
    return 0;
}