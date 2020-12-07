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

    int tc; cin >> tc;
    for (int t = 1; t <= tc; t++) {
        int a,b,temp;
        int ans=0;
        cin >> a >> b >> temp;
        for(int i=0;i<=temp;i++){
            if((a^i)<(b^i)){
                cout << "a is: " << a << endl;
                cout << "i is: " << i << endl;
                cout << "b is: " << b << endl;
                cout << endl;
                ans++;
            }

        }
        cout << ans << endl;
    }
}