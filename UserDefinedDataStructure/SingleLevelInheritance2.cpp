//ek parent ke multiple bache
#include <stdio.h>

using namespace std;
class Vehicle// parent class
{

public:
int topSpeed;
float mileage;

};
 
//class Bike : Scooty{//here Scooty will be inaccessable
class Bike : public Vehicle{//: == extends // child class Bike or derived class
public :
int gears;

};

class Scooty : public Vehicle{//: == extends // child class Bike or derived class
  public :
int bootSpace;//dikky
//ye sirf scooty me hota he bike me nahi
  };

  class Car : public Vehicle{//: == extends // child class Bike or derived class
    public :
    bool window;
    
    };

    class Truck : public Vehicle{//: == extends // child class Bike or derived class
      public :
      int wheel;
      
      };



int main(){
    Bike b1;
    // b1.topSpeed = 100;//error
    // b1.mileage = 12.5;//error inaccesable
    b1.topSpeed = 100;
    b1.mileage = 12.5;
    b1.gears = 5;

  //  b1.bootSpace = 12;// this is not allowed as private data member



    return 0 ;
}