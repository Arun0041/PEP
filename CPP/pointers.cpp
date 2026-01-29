#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    int *ptr = &num; // it will store the address of num
    cout<< "Value of num: " << num << endl;
    cout<< "Address of num: " << &num << endl;
    cout<< "Value of ptr: " << ptr << endl;
    cout<< "Value pointed by ptr: " << *ptr << endl; // dereferencing the pointer(value at that address)
    cout<< "Address of ptr: " << &ptr << endl; // address of the pointer itself

    // increament the value using pointer
    (*ptr) ++;
    cout<< "Value of num after incrementing using pointer: " << num << endl;

    // double pointer
    int **dptr = &ptr; 
    cout<< "Value of dptr (address of ptr): " << dptr << endl;
    cout<< "Value pointed by dptr (value of ptr): " << *dptr << endl; // dereferencing once (value at that address) it will give the value of ptr
    cout<< "Value pointed by value pointed by dptr (value of num): " << **dptr << endl; // dereferencing twice (value at that address)
}