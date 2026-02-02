#include<bits/stdc++.h>
using namespace std;

// LeetCode 50: Pow(x, n)
// https://leetcode.com/problems/powx-n/

long long myPow(int n, int p){
    if(p==0) return 1;
    long long half = myPow(n, p/2);
    if(p%2==0){
        return half * half;
    } else {
        return half * half * n;
    }
}

int main(){
    int n, p;
    cin >> n >> p;
    cout << myPow(n, p) << endl;
    return 0;
}