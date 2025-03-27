#include<iostream>

using namespace std;

    // User defined data type
    class Car // Car is a user defined data type
    {// class is a keyword to define a user defined data type
        //class is a blueprint /template
        public:
        int model;
        char name[20];
        float price;
    };
    void printCar(Car c)
    {
        cout << "Model: " << c.model << endl;
        cout << "Name: " << c.name << endl;
        cout << "Price: " << c.price << endl;
    }

    //Deep copy // no changes in original
// void changeCar(Car c)  //pass by value // this change will not be reflected
// {
//     c.model=100;
// }

    //shallow copy // c is just another name for car
void changeCar(Car& c)  //pass by reference // this change will be reflected
{
    c.model=100;
}
    int main()
    {

        Car c1;//object is an instance of a class
        cout << "Enter model: ";
        cin >> c1.model;
        cout << "Enter name: ";
        cin >> c1.name;
        cout << "Enter price: ";
        cin >> c1.price;

        cout << "Model: " << c1.model << endl;
        cout << "Name: " << c1.name << endl;
        cout << "Price: " << c1.price << endl;

        Car c2;
        cout << "Enter model: ";
        cin >> c2.model;
        cout << "Enter name: ";
        cin >> c2.name;
        cout << "Enter price: ";
        cin >> c2.price;
printCar(c2);
changeCar(c2);//pass by value
printCar(c2);
        return 0;
    }