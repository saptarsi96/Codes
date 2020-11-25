#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



ll solve(vector<ll> v1,ll n) {
    ll sum = 0;
    for(ll i:v1){
        sum += i;
    }
    return (n*(n+1))/2 - sum;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc; cin >> tc;
    vector<ll> v1;
    int size = tc;
    int temp;
    tc--;
    while(tc--){
        cin >> temp;
        v1.push_back(temp);
    }
    int ans = solve(v1,size);
    cout << ans;
}