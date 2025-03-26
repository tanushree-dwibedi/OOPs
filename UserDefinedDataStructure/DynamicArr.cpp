#include <iostream>

using namespace std;

int main(){
    int* arr = new int[5];
    arr[1]= 5;
    arr[3]= 10;
    cout <<arr[1] <<" "<< arr[3] << endl;
}