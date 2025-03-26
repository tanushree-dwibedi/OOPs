                   //public // private // protected
//outside class   ->  yes      no          no
//inside class    ->  yes      yes        yes
//Derived class   ->  yes      no         yes  





#include <iostream>

using namespace std;

class Student{
    //private:   //sometimes we dont want the user to change a particular class member but we want that user can atleast print it ->ue use getter func not setter
    float marks;//by default all class members are private unless mentioned otherwise
//we cant use or change these
    public:
    int rno;
    string name;
    void display(){
        cout<<name<<" "<<marks<<" "<<rno<<endl;    
         }


Student(){
}
Student(int rno , string name , float marks){//we can use private attri marks here
    this->rno = rno;
    this->name = name;
    this->marks = marks;
}

float getMarks(){
    return marks;
}

void setMarks(float m){//this is allowed coz within class you can access private
    marks=m;
}

private:
         /* try not to  make constructor private
         Student(int r , string n , float m){//we can use private attri marks here
    rno = r;
    name = n;
    marks = m;
}
    */
};


int main(){

    Student s1;
    s1.rno = 78;
    s1.name = "Raghav Garg";
   // s1.marks = 92.2;//this will show error
    s1.display();// here also marks will store garbage value
    
   Student s2(33,"Tanushree D",33.3);
  s2.display();

  cout<<s2.getMarks()<<endl;//you cant change this but you can get this
  
s2.setMarks(50);//this changes marks
s2.display();








    return 0 ;
}