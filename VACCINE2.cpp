#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {
    int size,k;
    cin >> size >> k;
    vector<int> v1;
    while(size--){
        int temp;
        cin >> temp;
        v1.push_back(temp);
    }
    int risk = 0;
    int not_risk = 0;
    for(int i:v1){
        if(i>=80 or i<=9){
            risk += 1;
        }
        else{
            not_risk += 1;
        }
    }
    int ans = ceil((float)risk/k) + ceil((float)not_risk/k);
    cout << ans << endl;
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