#include <iostream>
#include <string>
using namespace std;

class Person
{
    //properties/attributes
   
public:
string name;
int age;
Person(){
cout<<"parent class constructor"<<endl; //default constructor
}
Person(string name, int age) //parameterized constructor
{       
this->name = name; //initializing the data members using the constructor
this->age = age; //initializing the data members using the constructor
}

~Person(){ //destructor
cout<<"parent class destructor"<<endl; //destructor
}
};

class Student : public Person //inheritance
{
    public:
    //properties/attributes
    int rollNo;
Student(){

}
    Student(string name , int age ,int rollNo): Person( name,  age) //default constructor
    { //default constructor
        cout<<"child class constructor"<<endl; //default constructor
        this->rollNo = rollNo; //initializing the data members using the constructor
    }
    
    void displayInfo() //method to display the information of the student
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
    }
    ~Student(){ //destructor
        cout<<"child class destructor"<<endl; //destructor
    }

};
//Multiple Level Inheritance
class  GradStudent : public Student //inheritance
{
public : 
string researchTopic; //properties/attributes
};
//class Teacher: public Student {// both Student and Teacher are derived from Person class // hence this is heirachical inheritance
class Teacher
{
    
public:
    string subject;;
    double salary;
};




//Multiple Inheritance
class TA: public Student, public Teacher //inheritance
{
public:

};

int main(){
    /*
    Student s1; //creating an object of the class Student
    s1.name = "John Doe"; //accessing the properties of the class using the object
    s1.age = 20; //accessing the properties of the class using the object
    s1.rollNo = 101; //accessing the properties of the class using the object
    s1.displayInfo(); //calling the method to display the information of the student
*/
    // Creating object using parameterized constructor
    Student s1("John Doe", 20, 101);
    s1.displayInfo();
    GradStudent s3;
 s3.name = "Neha";
s3.age = 22;
s3.rollNo = 102;
s3.displayInfo(); //calling the method to display the information of the student


TA t1; //creating an object of the class TA

t1.name = "Jtaku"; //accessing the properties of the class using the object

t1.subject ="somethin"; //accessing the properties of the class using the object

cout<<t1.name<<endl; //accessing the properties of the class using the object
cout<<t1.subject<<endl; //accessing the properties of the class using the object



return 0;



}
// hybrid inheritance is a combination of all other types of inheritance.