//ek parent ka ek bacha
#include <stdio.h>

using namespace std;
class Scooty// parent class
{

public:
int topSpeed;
float mileage;

private:
int bootSpace;//dikky
//ye sirf scooty me hota he bike me nahi

};
 
//class Bike : Scooty{//here Scooty will be inaccessable
class Bike : public Scooty{//: == extends // child class Bike or derived class
public :
int gears;

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