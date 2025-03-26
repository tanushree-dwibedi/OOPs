//Encapsulation is nothing but a class
//It is a way of wrapping data and methods that work on the data into a single unit
//In encapsulation a class must containg both data member and member function
//Data hiding is a part of encapsulation
//In Object Oriented Programming, encapsulation is defined as binding together the data and the functions that manipulate them.
#include <iostream>
using namespace std;



// Class that represents a person
class Person {
    
    // private members that will be hidden
    int socialID;
    string name;
public:

    // public members that are accessible
    Person(string n, int id) {
        name = n;
        socialID = id;
    }
    string getName() {
        return name;
    }
    bool validateID() {
        if (socialID <= 1001 && socialID >= 0)
            return true;



        else
            return false;
    }
};

int main() {
    
    Person p1("Shubham", 503);
    if (!p1.validateID()) cout << "Invalid SocialID";
    
    cout << p1.getName();
    return 0;
}