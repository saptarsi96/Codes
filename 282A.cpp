#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



int solve() {
    int ans =0;
    string test; cin >> test;
    if(test[0] == '+' or test[2] == '+') {
        ans++;
    }
    else if (test[0] == '-' or test[2] == '-'){
    ans--;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc; cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        int ans = solve();
        cout << ans << endl;
    }
}