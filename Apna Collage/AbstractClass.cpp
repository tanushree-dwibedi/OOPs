#include <iostream>

using namespace std;
class Shape{// abstract class by default coz it contains a pure virtual function
    virtual void draw() =0 ;

};
class Circle: public Shape{
    public :
    void draw(){
        cout<<"Drawing a circle \n ";
    }
};
int main(){
    Circle c1;
    c1.draw();
    return 0 ;
}