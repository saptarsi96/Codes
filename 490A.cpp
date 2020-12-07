#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int x;
    int tc; cin >> tc;
    vector<int> v1[4];
    for (int t = 1; t <= tc; t++) {
        cin >> x;
        v1[x].push_back(t);
    }
    int ans = min(v1[1].size(), min(v1[2].size(), v1[3].size()));
    cout << ans << endl;
    for(int i=0;i<ans;i++){
        cout<< v1[1][i] << " " << v1[2][i] << " " << v1[3][i] << endl;
    }

}