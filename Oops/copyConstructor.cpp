#include <iostream>
using namespace std;

class Student{
public:
    string name;
    int rollno;
    float cgpa;

Student(string name,int rollno,float cgpa){
    this->name=name;
    this->cgpa=cgpa;
    this->rollno=rollno;
}



};

int main(){
    Student s1("Ram",32,9.2);
    Student s2(s1);               //copy constructor is being called here.
    s1.name="shyam";
    cout<<"Name of this gentleman is:"<<s2.name<<endl;
    cout<<"Name of this gentleman is:"<<s1.name<<endl;
    return 0;
}