#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {
    int m,n;
    cin >> m >> n;
    int sum = 0;
    vector<int> v1;
    while(m--){
        int temp;
        cin >> temp;
        v1.push_back(temp);
        sum += temp;
    }
    if(sum%n==0)
        cout << 0 << endl;
    else
        cout << 1 << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc; cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}