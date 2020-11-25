#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {
    int s,q,flag=0; cin >> s >> q;
    string ans; cin >> ans;
    while(q--){
        int l,r; cin>>l>>r; l--; r--;
			int pos=0;
			for(int i=0;i<l;i++)
			{
				if(ans[i]==ans[l]) pos=1;
			}
			for(int i=r+1;i<s;i++)
			{
				if(ans[i]==ans[r]) pos=1;
			}
            if(pos){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
    }

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