#include <iostream>

using namespace std;

class Vector{//we use capital V-ector as small v-ector already exists as a data structure in cpp

    public:
int size;
int capacity;
int* arr ;// makes dynamic array , whose size can be increased;
Vector(){
    size = 0 ;
     capacity =1 ;
     arr= new int[1];
}
void push(int ele){//to add element to the end of the array
if(size==capacity){
    capacity*=2;
    int* arr2 = new int[capacity];
    for (size_t i = 0; i < size; i++)
    {
          arr2[i]=arr[i]  ;
    }

     delete[] arr;  // Free old array to avoid memory leak
/*
 arr = arr2; makes arr point to the new, larger array.
    ❌ The original array is lost, causing a memory leak unless delete[] arr; is used before reassignment.
    ✅ Always delete[] dynamically allocated arrays before reassigning pointers.
*/

    arr = arr2;//now first array is pointing to the second array and both these arrays are the same thing
    /*
     arr = arr2; makes arr point to the same memory as arr2 (not a copy).
 The original memory for arr is lost (causes a memory leak if not delete[] arr;).
    */   

}
arr[size++]=ele;
}

void pop(){
    if(size==0){
        cout<<"Array is Empty"<<endl;
    }
    size--;
}

int get(int idx){
    if(size==0){
        cout<<"Array is Empty"<<endl;
        return -1;
    }
    if(idx>=size||idx<0){
        cout<<"Invalid Index"<<endl;
        return -1;
    }
   return arr[idx];
}
void print(){
    for(int i = 0 ; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

};


int main(){

    Vector v;
    cout<<v.size<<" "<<v.capacity<<endl;
    v.push(10);
    v.print();//10
    cout<<v.size<<" "<<v.capacity<<endl;
    v.push(15);
    v.print();//10 15
    cout<<v.size<<" "<<v.capacity<<endl;
    v.push(17);
    v.print();//10 15 17
    cout<<v.size<<" "<<v.capacity<<endl;
    v.push(8);
    v.print();//10 15 17 8
    cout<<v.size<<" "<<v.capacity<<endl;
    v.push(29);
    v.print();//10 15 17 8 29
    cout<<v.size<<" "<<v.capacity<<endl;

    v.pop();
    v.print();//10 15 17 8
    v.get(2);//17
    v.pop();
    v.print();//10 15 17


}