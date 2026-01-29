#include <bits/stdc++.h>
using namespace std;

// method 1 : manual reversal using sliding window
void reverseInGroups(vector<int> &arr, int n, int k)
{
    for (int i = 0; i < n; i += k)
    {
        int left = i;
        // to handle case when k is not multiple of n
        int right = min(i + k - 1, n - 1);

        // reverse the sub-array [left, right]
        while (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

// method 2 : using inbuilt reverse function
void reverseInGroups(vector<int> &arr, int k)
{
    // code here
    int n = arr.size();
    if (k >= n)
    {
        reverse(arr.begin(), arr.end());
        return;
    }

    for (int i = 0; i < n; i += k)
    {
        if (i + k >= n)
        {
            reverse(arr.begin() + i, arr.end());
            return;
        }
        reverse(arr.begin() + i, arr.begin() + k + i);
    }
}


int main()
{
    return 0;
}