#include<bits/stdc++.h>
using namespace std;
void printEven(int n){
    if(n>10 || n<1) return;
    if(n%2==0){
        cout<<n<<endl;
    }
    printEven(n+1);
}
int main(){
    int n=1;
    printEven(n);
}