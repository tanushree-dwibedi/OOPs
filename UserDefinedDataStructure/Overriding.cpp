#include <iostream>
#include <vector>
//overriding -> runtime polymorphism
//overloading -> compile time polymorphism
//overriding ->  function in base class is virtual and function in derived class is also virtual
//overloading -> function in base class is not virtual and function in derived class is also not virtual
using namespace std;
class Scooty{
    public:
int topSpeed;
float mileage;
//if this function was not virtual then //pee pee poo poo would have been printed
// void sound(){
//     cout<<"Pee Pee Poo Poo"<<endl;
// }
//if this function is virtual then //vroom vroom would have been printed
virtual void sound(){
    cout<<"Pee Pee Poo Poo"<<endl;
}
//if this function sound was completely deleted it would have been an error
private:
    int price;
};
class Bike : public Scooty{
    public:
    int gears;
    void sound(){
        cout<<"Vroom Vroom"<<endl;
    }
};

class SuperBike : public Scooty{
    public:
 
    void sound(){
        cout<<"Dhooom Dhoom"<<endl;
    }
};



int main(){ 
    /*
    //These are static objects
    Bike b;
    b.sound();
    // Output: Vroom Vroom      
    Scooty s;
    s.sound();
    // Output: Pee Pee Poo Poo
    */
   Bike* b = new Bike();//object Pointer
   b->sound();
   Scooty* s = new Scooty();
   s->sound();
   b->gears = 5;
   cout<<b->gears<<endl;
   Scooty* s1 = new Bike();
   s1->sound();//pee pee poo poo
 
    Scooty* c = new SuperBike();
    c->sound();
    vector<Scooty*> v;//uesed when u need multiple objects of different classes same data type
    v.push_back(new Bike());
    return 0;
}