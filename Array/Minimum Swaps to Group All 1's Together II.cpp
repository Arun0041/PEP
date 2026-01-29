#include <bits/stdc++.h>
using namespace std;

// [0,0,1,0,1,1,0,0];
// ans is min swaps to group all 1's together in circular manner
// so output = 1
// sliding window approach
int minSwaps(vector<int> &nums)
{
    int totalOnes = 0;
    for (int num : nums)
    {
        if (num == 1)
            totalOnes++;
    }

    int n = nums.size();
    // edge case
    if (totalOnes == 0 || totalOnes == n)
        return 0;

    // initial window
    int currentOnes = 0;
    for (int i = 0; i < totalOnes; i++)
    {
        if (nums[i] == 1)
            currentOnes++;
    }

    int maxOnesInWindow = currentOnes;

    // sliding the window
    for (int i = totalOnes; i < n + totalOnes; i++)
    {
        // remove the first element of previous window
        if (nums[(i - totalOnes) % n] == 1)
            currentOnes--;
        // add the new element
        if (nums[i % n] == 1)
            currentOnes++;

        maxOnesInWindow = max(maxOnesInWindow, currentOnes);
    }

    return totalOnes - maxOnesInWindow;
}

// Method 2: broute force
int minSwaps(vector<int> &nums)
{
    int n = nums.size();
    int SizeOfWindow = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
        {
            SizeOfWindow++;
        }
    }

    if (SizeOfWindow == 0 || SizeOfWindow == n)
        return 0;

    int zeros = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int totalOnesInsideWindow = 0;
        for (int j = i; j < SizeOfWindow + i; j++)
        {
            if (nums[j % n] == 1)
            {
                totalOnesInsideWindow++;
            }
        }

        zeros = min(SizeOfWindow - totalOnesInsideWindow, zeros);
    }
    return zeros;
}

int main()
{
    return 0;
}
