#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    vector<int> v1;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    
    int index1;
    int tc; cin >> tc;
    for (int t = 1; t <= tc; t++) {
        int temp;
        cin >> temp;
        v1.push_back(temp);
    }
        int i=0,ans = INF;
        for (int i = 0; i < tc; ++i) {
        int d = abs(v1[i] - v1[(i + 1) % tc]);
        if (d < ans) {
            ans = d;
            index1 = i;
        }
        }
        cout << index1+1 <<" " << (index1+1)%tc+1 << endl;
    }
