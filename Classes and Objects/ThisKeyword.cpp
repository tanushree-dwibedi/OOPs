#include <iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs;
    float avg;
//     Cricketer(string name , int runs){// here we are taking the same variable names this will generate a problem
//   name = name;
//    runs = runs;
//     }
    Cricketer(string name , int runs ,float avg){// here we are taking the same variable names this will generate a problem
  this->name = name;
   this->runs = runs;
    this->avg = avg;
    }
    // void print(int runs){//here the it will consider the local variable runs and not the global variable runs
    //     cout<<name<<endl<<runs<<endl<<avg<<endl;
    // }
    void print(int runs){
        cout<<this->name<<endl<<this->runs<<endl<<this->avg<<endl;
        cout<<runs<<endl;
    }
    int matches(){
        return runs/avg;
    }
};
// void print(Cricketer c){
//     cout<<c.name<<endl<<c.runs<<endl<<c.avg<<endl;
// }

int main(){
Cricketer c1("virat kohli", 800, 50.5);
Cricketer c2("Rohit Sharma", 900, 45.5);
// print(c1);
// print(c2);

c1.name = "Sachin Tendulkar";
c1.print(5);
c2.print(9);

cout<<c1.matches()<<endl;
cout<<c2.matches()<<endl;

    return 0;


}