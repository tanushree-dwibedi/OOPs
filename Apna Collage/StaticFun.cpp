#include <iostream>

using namespace std;


class ABC{
    public :
     ABC(){
        cout<<"Constructor called"<<endl;
     }
     ~ABC(){
        cout<<"Destructor called"<<endl;
     }
};
void fun(){
// int x = 0 ;non static prints 0 every time
 static int x = 0 ; //static prints 0 only once and then increments the value of x by 1 every time
    cout<<x<<endl;
    x++;
}

int main(){
    fun(); // prints 0
    fun(); // prints 1
    fun(); // prints 2
  
  if(true){
    //ABC obj; // constructor called  
static ABC obj;//static constructor called; 
//once created , it will last till the completing of program 

}
  cout<<"End of main"<<endl; // destructor called when the object goes out of scope
  
  
  
  
    return 0;
}   