#include<bits/stdc++.h>
using namespace std;

// *s.rbegin is pointer to the largest element in the set

int thirdLargest(vector<int> &arr){
    int n = arr.size();
    set<int> s(arr.begin(), arr.end());
    if(s.size() < 3) return -1;
    s.erase(*s.rbegin());
    s.erase(*s.rbegin());
    return *s.rbegin();
}

int main(){

}