//same person different rolls -> he is a - > friend , brother , father , son
//polymorphism = manyforms
//Poly = many , morphism = forms

// different types of polymorphism 
// function overloading
//operator overloading
//constructor is also a an example of polymorphism


#include<iostream>

using namespace std;

    // User defined data type
    class Student // student is a user defined data type
    {// class is a keyword to define a user defined data type
        //class is a blueprint /template
        public:
        int rollNo;
        string name;
        float marks;
        Student(){//original default constructor 

        }

        Student(string s , int r , float g){//Parameterised constructor
            name=s;
           rollNo= r;
           marks =g;
        }
        Student(float g,string s , int r){//Parameterised constructor
            name=s;
           rollNo= r;
           marks =g;
        }
        Student(string s, int r){
            name = s;
            rollNo = r;
        }
    };
    void change(Student& s){
        s.name = "sudesh";
    }

int main()
{

    Student s1("Raghav Garg", 3 , 9.3);//calling a constructor
    // cout << "Enter roll number: ";
    // cin >> s1.rollNo;
    // cout << "Enter name: ";
    // cin >> s1.name;
    // cout << "Enter marks: ";
    // cin >> s1.marks;

    cout << "Roll number: " << s1.rollNo << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Marks: " << s1.marks << endl;

change(s1);


Student s3("Hellowho",7);
s3.rollNo = 0;// you can also override the parameters
s3.marks = 9.22;

Student s4(3.4, "haiha", 4);

cout << "Roll number: " << s3.rollNo << endl;
cout << "Name: " << s3.name << endl;
cout << "Marks: " << s3.marks << endl;

cout << "Roll number: " << s4.rollNo << endl;
cout << "Name: " << s4.name << endl;
cout << "Marks: " << s4.marks << endl;

    Student s2;//no erro cos default constructor present if u refove the original default constructor this will generate an error
    cout << "Enter roll number: ";
    cin >> s2.rollNo;
    cout << "Enter name: ";
    cin >> s2.name;
    cout << "Enter marks: ";
    cin >> s2.marks;

    cout << "Roll number: " << s2.rollNo << endl;
    cout << "Name: " << s2.name << endl;
    cout << "Marks: " << s2.marks << endl;


    Student s6 = s1;//Deep copy
    cout << "Roll number: " << s6.rollNo << endl;
    cout << "Name: " << s6.name << endl;
    cout << "Marks: " << s6.marks << endl;
s6.name = "gagan";
cout << "Roll number: " << s6.rollNo << endl;
    cout << "Name: " << s6.name << endl;
    cout << "Marks: " << s6.marks << endl;

    Student s7(s1);// copy constructor == deep copy (if you make changes to s7 s1 remains the same)
s7.name = "vijay";

cout << "Roll number: " << s7.rollNo << endl;
cout << "Name: " << s7.name << endl;
cout << "Marks: " << s7.marks << endl;

cout << "Roll number: " << s1.rollNo << endl;
cout << "Name: " << s1.name << endl;
cout << "Marks: " << s1.marks << endl;

    return 0;
}