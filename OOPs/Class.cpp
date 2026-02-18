#include <iostream>
using namespace std;

class Account_details{

private:  //access modifier
    string password;

public:  //access modifier
    string name;
    float currentBalance;

// Constructor -> there are three types of constructors -> copy, parametrized, non parameterized

Account_details(){
    // non parameterized constructor
}

Account_details(string name, float currentBalance){
    // parameterized constructor
    this->name=name;
    this->currentBalance=currentBalance;
}

// Method functions
void CurrentBalance(){
    cout<<"your current balance is:"<< currentBalance<<endl;
}

void withdrawal(int x){
    currentBalance-=x;
    cout<<"your current balance after withdrawing RS "<<x<<" is:"<<currentBalance<<endl;
}

void credited(int y){
    currentBalance+=y;
    cout<<"your current balance after crediting RS "<<y<<" is:"<<currentBalance<<endl;
}

//setter
void set_pass(string p){
    password=p;
}

//getter
string get_pass(){
    return password;
}



};


int main(){
    Account_details c1("Ram",50000);

    // cout<<c1.name<<endl; 
    // c1.password="Suppu";
    c1.set_pass("suppu");
    c1.CurrentBalance();
    c1.withdrawal(1500);
    c1.CurrentBalance();
    c1.credited(500);

    // c1.get_pass();
    // c1.set_pass();    // is password is private -> getter and setter
    
    cout<<"your password is:"<<c1.get_pass()<<endl;    // if password is public
    return 0;
}