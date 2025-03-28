#include <iostream>

using namespace std;

class Cricketer{
    public:
        string name;
        int runs;
        int avg;
        Cricketer(string name,int runs,int avg){
            this->name = name;
            this->runs = runs;
            this->avg = avg;
            
        }
    };
        int main(){
        //directly  storing value in a pointer variable without creating an actual variable
//dynamic memory allocation , here memory is allocated in heap during runtime
int* p = new int(10);
cout<<*p<<endl;
delete p;//deleting the memory allocated in heap
cout<<*p<<endl;//now it will give garbage value
//if you write it like int x = 8 ; it will be stored in stack memory and memory will be allocated during compile time

Cricketer* c2 = new Cricketer("Sachin", 10000, 50);//this is a better way
Cricketer c1 = Cricketer("Virat", 5000, 60);

cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<endl;
//cout<<c2.name<<" "<<c2.runs<<" "<<c2.avg<<endl;// this will generate error as c2 is a pointer
cout<<(*c2).name<<" "<<(*c2).runs<<" "<<(*c2).avg<<endl;
cout<<c2->name<<" "<<c2->runs<<" "<<c2->avg<<endl;


     

            return 0 ;
        };