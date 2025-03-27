#include<iostream>

using namespace std;

    // User defined data type
    class Student // student is a user defined data type
    {// class is a keyword to define a user defined data type
        //class is a blueprint /template
        public:
        int rollNo;
        char name[20];
        float marks;
    };

int main()
{

    Student s1;//object is an instance of a class
    cout << "Enter roll number: ";
    cin >> s1.rollNo;
    cout << "Enter name: ";
    cin >> s1.name;
    cout << "Enter marks: ";
    cin >> s1.marks;

    cout << "Roll number: " << s1.rollNo << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Marks: " << s1.marks << endl;

    Student s2;
    cout << "Enter roll number: ";
    cin >> s2.rollNo;
    cout << "Enter name: ";
    cin >> s2.name;
    cout << "Enter marks: ";
    cin >> s2.marks;

    cout << "Roll number: " << s2.rollNo << endl;
    cout << "Name: " << s2.name << endl;
    cout << "Marks: " << s2.marks << endl;

    return 0;
}