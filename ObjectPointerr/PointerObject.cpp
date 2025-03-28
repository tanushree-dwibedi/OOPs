
//a->b is equivalent to (*a).b
//a must be a pointer

#include<iostream>

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
    void change(Cricketer* p){  

 p->name = "Dhoni";//(*p).name = "Dhoni";
 p->runs = 10000;//(*p).runs = 10000;
    }
        int main(){
//            Cricketer c2 = Cricketer("Sachin", 10000, 50);
      Cricketer c1 = Cricketer("Virat", 5000, 60);
 
        Cricketer* p1 = &c1;
        cout<<(*p1).name<<endl;
        (*p1).avg = 70;
        cout<<(*p1).avg<<endl;

        cout<<c1.name<<endl;
        change(&c1);
        cout<<c1.name<<endl;


        }
