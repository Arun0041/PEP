#include<bits/stdc++.h>
using namespace std;


// void function
void greet(){
    cout<<"Hello, World!"<<endl;
}

// non-void function
int add(int a, int b){
    return a + b;
}

float subtract(float x, float y){
    return x - y;   
}

// pass by value
void passByValue(int num){
    // here num is a copy of the original variable
    // so changes made to num will not reflect outside the function
    num += 10;
    cout<<"Inside passByValue: "<<num<<endl;
}

// pass by reference
void passByReference(int &num){
    // here num is a reference to the original variable 
    // so changes will reflect outside the function
    // not creating a copy
    num += 10;
    cout<<"Inside passByReference: "<<num<<endl;
}

int main(){
    greet(); // Calling void function

    int sum = add(5, 7);
    cout<<"Sum: "<<sum<<endl;

    float difference = subtract(10.5, 4.2); 
    cout<<"Difference: "<<difference<<endl;

    return 0;
}   