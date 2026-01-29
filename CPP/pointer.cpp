#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=50;
    int *p= &x;
    *p = 88;
    cout<< x;
}