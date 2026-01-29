// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int i = 0; i < prices.size(); i++)
    {

        minPrice = min(minPrice, prices[i]); // continually update the minimum price

        maxProfit = max(maxProfit, prices[i] - minPrice); // calculate the profit if sold today and update maxProfit
    }

    return maxProfit;
}

// using nested loop
int maxprofit(vector<int> &p){
    int n = p.size();
    int maxP=0;
    for(int i=0;i<n-1;i++){
        int buy = p[i];
        for(int j=i+1;j<n;j++){
            if(p[j] > buy){
                maxP = max(maxP, p[j]-buy);
            }
        }

    }
    return maxP;
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices) << endl;
    cout << maxprofit(prices) << endl;
    return 0;
}