#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {
    ll a,b;
    ll odd_a = 0,even_a=0;
    ll odd_b=0,even_b=0;
    cin >> a >> b;
    if(a%2==0){
        odd_a = a/2;
        even_a = a/2;
    }
    else{
        odd_a = a/2+1;
        even_a = a/2;
    }
    if(b%2==0){
        odd_b = b/2;
        even_b = b/2;
    }
    else{
        odd_b = b/2+1;
        even_b = b/2;
    }
    cout << odd_a*odd_b + even_a*even_b  << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll tc; cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}