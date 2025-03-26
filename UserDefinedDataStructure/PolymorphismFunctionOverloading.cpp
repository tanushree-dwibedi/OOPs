#include <iostream>

using namespace std;

void sum(int a , int b){
    cout<<a+b<<endl;
}
// void sum(float a , int b){// this will show error as any decimal number is considered as double by default in cpp
void sum(double a , int b){
      cout<<a+b<<endl;
}
void sum(int a , int b, int c){
    cout<<a+b+c<<endl;
}
// int sum(int a , int b){ this is the same as  void sum(int a , int b){ so it will show error
//return type badal denese function alag nahi ban jata
//     return a+b;
// }
void sum(string a, string b){
    cout<<a+b<<endl;
}
int main(){

   sum(1,2);
   sum(3.2,5);
   sum(2,3,5);
   sum("Raghav","Garg");


    return 0 ;

}