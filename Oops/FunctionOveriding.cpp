#include<iostream>
using namespace std;

// illustration of function overriding and virtual function

class Parent{
    public:
    void baap(){
        cout<<"mai baap hu!!"<<endl;
    }

    virtual void hello(){
        cout<<"hello from baap!!"<<endl;
        }
};

class Child : public Parent{
    public:
    void bacha(){
        cout<<"mai bacha hu!!"<<endl;
    }

    void hello(){
        cout<<"hello from bacha!!"<<endl;
        }

};

int main(){
    Child c1;
    // c1.bacha();
    c1.hello();

    // Parent p1;
    // p1.baap();
    return 0;
}