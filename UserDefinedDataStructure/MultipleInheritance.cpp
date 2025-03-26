//2 logon ke qualities 1 insan me ho to use multiple inheritance bolte hen
// a child inherits from both his mother and father
//example - > Saurav Netravalkar ->cricketer and engineer at oracle

#include <iostream>
using namespace std;
class Cricketer{
    public:
    int run;
     int wickets;
     int average;

};
class Engineer{
    public:
    int experience;
    string domain;

};

class Phodu : public Engineer,Cricketer{
    public :
    string name ;
};
int main(){

    return 0;
}
