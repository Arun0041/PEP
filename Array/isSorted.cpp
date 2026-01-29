#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &arr)
{
    // code here
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            return 0;
        }
    }
    return 1;
}

int main(){
    vector<int> arr = {1, 2, 2, 4, 5};
    if (isSorted(arr))
    {
        cout << "The array is sorted." << endl;
    }
    else
    {
        cout << "The array is not sorted." << endl;
    }
    return 0;
}