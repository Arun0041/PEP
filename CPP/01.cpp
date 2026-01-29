#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cout<<a; // It will print garbage value as 'a' is uninitialized

    a=5;
    cout<<a<<endl; // It will print 5

    float b = 5.5;
    cout<<b<<endl;
    
    // operator
    //1. Arithematics -> + - / * %
    int A = 5;
    int B = 4;
    cout<<A+B<<endl;

    // 2. Relational -> < , > , <= , >= , == , !=
    cout<<(A>B)<<endl; // it will return 1 if true else 0

    // 3. Logical -> && , || , !
    cout<<((A>B) && (A==5))<<endl; // it will

    // 4. Bitwise -> & , | , ^ , ~ , << , >>
    cout<<(A & B)<<endl;

    // 5. Assignment -> = , += , -= , *= , /= , %=
    A += 2; // A = A + 2
    cout<<A<<endl;

    // 6. Increment/Decrement -> ++ , --
    A++; // A = A + 1
    cout<<A<<endl;

    // 7. Conditional (Ternary) -> ? :
    int max = (A > B) ? A : B;
    cout<<max<<endl;

    

    return 0;
}