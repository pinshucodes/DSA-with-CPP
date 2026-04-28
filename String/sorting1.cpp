#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "physicswallah";
    string t = "wallahsicsphy";

    // this analogy is wrong--done by me
    // string a = sort(s.begin(),s.end());
    // string b = sort(t.begin(),t.end());  

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());  

    if(s==t) cout<<"s and t are Anagram.";
    else cout<<"not an Anagram.";
    return 0;
}