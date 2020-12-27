#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

ll countRepeatingDigits(ll N)
{
    // Initialize a variable to store
    // count of Repeating digits
    ll res = 0;

    // Initialize cnt array to
    // store digit count

    ll cnt[10] = {0};

    // Iterate through the digits of N
    while (N > 0)
    {

        // Retrieve the last digit of N
        ll rem = N % 10;

        // Increase the count of digit
        cnt[rem]++;

        // Remove the last digit of N
        N = N / 10;
    }

    // Iterate through the cnt array
    for (ll i = 0; i < 10; i++)
    {

        // If frequency of digit
        // is greater than 1
        if (cnt[i] > 1)
        {

            // Increment the count
            // of Repeating digits
            res++;
        }
    }

    // Return count of repeating digit
    return res;
}

void smallestNumber(ll N)
{
    ll answer = (N % 9 + 1) * pow(10, (N / 9)) - 1;
    if(countRepeatingDigits(answer)>0){
        cout << -1 << endl;
    }
    else{
        cout << answer << endl;
    }
}

void solve()
{
    ll n;
    cin >> n;
    smallestNumber(n);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll tc;
    cin >> tc;
    for (ll t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t  << ": ";
        solve();
    }
    return 0;
}