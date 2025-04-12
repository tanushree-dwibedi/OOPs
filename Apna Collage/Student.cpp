#include<iostream>
#include<string>
using namespace std;


class Student
{
    //properties/attributes

    public:
    //data members
    string name;
  //  double gpa;
    double *cgpaptr; //pointer to double
    Student(string name, double cgpa) //parameterized constructor
    {
        this->name = name; //initializing the data members using the constructor
        cgpaptr = new double; //dynamic memory allocation for cgpa
        *cgpaptr = cgpa; //initializing the cgpa using the constructor
       
    }
    Student(Student &originalobject) //copy constructor
    {
        cout<<"Customed Copy constructor called"<<endl; //copy constructor
        this->name = originalobject.name; //copying the data members of the original object to the new object
        //this->cgpaptr = originalobject.cgpaptr;
        cgpaptr = new double; //dynamic memory allocation for cgpa
        *cgpaptr = *originalobject.cgpaptr; //copying the value of cgpa from the original object to the new object 
    }
    void displayInfo() //method to display the information of the student
    {
        cout<<"Name: "<<name<<endl;
        cout<<"GPA: "<<*cgpaptr<<endl;
    }
    ~Student(){
        cout<<"Hi, I delete everything\n";
        delete cgpaptr; //deallocating the memory allocated for cgpa
    }
};
int main(){
    Student s1("John Doe", 3.5); //creating an object of the class Student using parameterized constructor
    s1.displayInfo(); //calling the method to display the information of the student
    
    Student s2(s1);
    s2.name = "Neha"; //changing the name of the student using the object
    *(s2.cgpaptr) = 4.8; //updating the cgpa of the student using the pointer
    s2.displayInfo(); //calling the method to display the information of the student

    s1.displayInfo();// we changed the value of s2 but the value of s1 is also changed because we are using the same pointer for both objects.
    // this is the problem of shallow copy.
    // we need to use deep copy to solve this problem. 

    return 0;
}
