// Author: arun
// Problem: Third Maximum Number (third largest unique number)
// LeetCode: 414 - https://leetcode.com/problems/third-maximum-number/

#include <bits/stdc++.h>
using namespace std;

// Returns the third largest distinct value in arr, or -1 if it doesn't exist
int thirdLargest(vector<int> &arr){
    set<int> s(arr.begin(), arr.end());
    if((int)s.size() < 3) return -1;
    s.erase(*s.rbegin());
    s.erase(*s.rbegin());
    return *s.rbegin();
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if(!(cin >> n)) return 0;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];

    int ans = thirdLargest(a);
    if(ans == -1) cout << "Not available\n";
    else cout << ans << '\n';

    return 0;
}