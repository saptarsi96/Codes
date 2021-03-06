#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {
    int size;
    cin >> size;
    string query;
    cin >> query;
    int left = 0;
    int right = size-1;
    int p_c = 0;
    int rem = 0;
    int final = 0;
    while(query[right]==')'){
        p_c += 1;
        right -= 1;
    }   
    if(p_c>right+1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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