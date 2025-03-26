#include <iostream>

using namespace std;

class Fraction{
    public :
    int num ;
    int den ;
    Fraction(int num , int den){
        this->num = num;
        this->den = den;
    }
    void display(){
        cout<<num<<"/"<<den<<endl;
    }
    Fraction add(Fraction f){
        int newNum = this->num*f.den + f.num*this->den;
        int newDen = this->den*f.den;
        Fraction ans(newNum,newDen);
        return ans;
    }
    Fraction operator+(Fraction f){
        int newNum = this->num*f.den + f.num*this->den;
        int newDen = this->den*f.den;
        Fraction ans(newNum,newDen);
        return ans;
    }
    Fraction operator-(Fraction f){
        int newNum = this->num*f.den - f.num*this->den;
        int newDen = this->den*f.den;
        Fraction ans(newNum,newDen);
        return ans;
    }
Fraction operator*(Fraction f){
        int newNum = this->num*f.num;
        int newDen = this->den*f.den;
        Fraction ans(newNum,newDen);
        return ans;
    }
    Fraction operator/(Fraction f){
        int newNum = this->num*f.den;
        int newDen = this->den*f.num;
        Fraction ans(newNum,newDen);
        return ans;
    }

    Fraction simplify(){
        int gcd = 1;
        int j = min(this->num,this->den);
        for(int i = 1 ; i<=j ; i++){
            if(this->num%i == 0 && this->den%i == 0){
                gcd = i;
            }
        }
        this->num = this->num/gcd;
        this->den = this->den/gcd;
        return *this;
    }

};

int main(){
//here '+' is an operator which performs differently based on operands

    int a = 3;
    int b = 4;
    string c = "3";
    string d = "4";
    
    cout<<a+b<<endl;//7
    cout<<c+d<<endl;//34

Fraction f1(1,2);
Fraction f2(1,4);
f1.display();
f2.display();
Fraction f3 = f1.add(f2);
f3.display();
Fraction f4 = f1+f2;
f4.display();
Fraction f5 = f1-f2;
f5.display();
Fraction f6 = f1*f2;
f6.display();
Fraction f7 = f1/f2;
f7.display();
Fraction f8 = f7.simplify();
f8.display();
    return 0;
}