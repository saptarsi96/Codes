#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n, m;
        vector<int> baskets;
        vector<int> prices;
        unordered_map<int, int> ans;
        int answer = 9999999;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            baskets.push_back(temp);
        }
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            prices.push_back(temp);
        }
        for (int i = 0; i < n; i++)
        {
            ans[baskets[i] - 1] += prices[i];
        }
        for (auto elem : ans)
        {
            if (elem.second < answer)
            {
                answer = elem.second;
            }
        }
        cout << answer << endl ;
    }
}