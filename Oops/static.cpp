#include<iostream>
using namespace std;


// illustration of static keyword using function -> static function

void fun(){
    static int x=0;
    cout<<"x is:"<<x<<endl;
    x++;
}

int main(){
    fun();
    fun();
    fun();
    return 0;
}