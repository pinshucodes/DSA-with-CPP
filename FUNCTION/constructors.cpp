#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollno;
    float cgpa;

    Student(string name, int rolllno, float cgpa)
    {
        this->name = name;
        this->rollno = rollno;
        this->cgpa = cgpa;
    }

    void student_info()
    {
        cout << "stuent's name is :" << name << endl;
        cout << "stuent's rollno is :" << rollno << endl;
        cout << "stuent's cgpa is :" << cgpa << endl;
    }
};

int main()
{
    Student s1("rahul", 4, 5.3);
    Student s2("shyam", 2, 5.9);
    // cout<<"Student 1 name is : "<<s1.name<<endl;
    // cout<<"Student 2 name is : "<<s2.name<<endl;
    s1.student_info();
    return 0;
}