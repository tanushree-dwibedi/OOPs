#include<iostream>
#include<string.h>

using namespace std;

class Teacher
{
    //properties/attributes
    double salary;
    public:
    //data members
string name;
string dept;
string subject;

public:
//default / non-parameterized constructor
Teacher(){//no return type same name as class
    cout<<"Default constructor called"<<endl; //default constructor
    dept = "Computer Science"; //default value of dept
   
    //initialization using constructor
}
//parameterized constructor
Teacher(string n, string d, string s, double sal) //parameterized constructor
{
    name = n; //initializing the data members using the constructor
    dept = d;
    subject = s;
    salary = sal;
}

Teacher(string name, string dept, string subject) //constructor overloading
{//this keyword is used to refer to the current object of the class 
    //right side object , left side parameters
  this->name=name;
    this->dept=dept;
    this->subject=subject;
   // this->salary=0; //initializing the salary to 0
}
Teacher(Teacher &originalobject) //copy constructor
{
    cout<<"Customed Copy constructor called"<<endl; //copy constructor
    this->name = originalobject.name; //copying the data members of the original object to the new object
    this->dept = originalobject.dept;
    this->subject = originalobject.subject;
    this->salary = originalobject.salary;
}



//methods/functions/member functions
void changeDept(string newDept)
{
    dept = newDept; 

}  
void setSalary(double newSalary)
{
    salary = newSalary; //setter method to set the value of salary  
}
double getSalary() //getter method to get the value of salary
{
    return salary; 
}  
void displayInfo() //method to display the information of the teacher
{
    cout<<"Name: "<<name<<endl;
    cout<<"Department: "<<dept<<endl;
    cout<<"Subject: "<<subject<<endl;
    cout<<"Salary: "<<salary<<endl;
}
};

class Account
{
private:
   double balance;
   string password;
public:
    string accountNumber;
    string username;
};




int main(){
    //creating an object of the class Teacher
    Teacher t1; //object creation //this is a default constructor
    //ever if we do not define a constructor, the compiler will create a default constructor for us.

    //accessing the properties of the class using the object
    t1.name = "John Doe"; 
    t1.dept = "Mathematics";
    t1.subject = "Algebra"; 
 //   t1.salary = 50000; //error: salary is private

   t1.changeDept("Physics"); //error: changeDept is private
 
    cout<<t1.name<<endl; //accessing the public member directly
    cout<<t1.dept<<endl; //accessing the public member directly
    cout<<t1.subject<<endl; //accessing the public member directly
    // cout<<t1.salary<<endl; //error: salary is private

 t1.setSalary(200000);
 cout<<t1.getSalary()<<endl; //accessing the private member using getter method
 
 Teacher t2;
cout<<t2.name<<endl; //prints nothing
cout<<t2.dept<<endl; //prints the initialised value of dept
cout<<t2.subject<<endl; //prints nothing

Teacher t3("Alice", "Physics", "Quantum Mechanics", 80000); //creating an object of the class Teacher using parameterized constructor

t3.displayInfo(); //calling the displayInfo method to display the information of the teacher


Teacher t4("Bob", "Chemistry", "Organic Chemistry"); //creating an object of the class Teacher using constructor overloading
//t4.setSalary(60000); //setting the salary using setter method
t4.displayInfo(); //calling the displayInfo method to display the information of the teacher
//here the salary shows random value because we have not set the salary using setter method

Teacher t5(t4); //creating an object of the class Teacher using parameterized constructor
//default copy constructor
t5.displayInfo(); //calling the displayInfo method to display the information of the teacher
//now custom copy constructor is called and the values of the original object are copied to the new object

   return 0;
}