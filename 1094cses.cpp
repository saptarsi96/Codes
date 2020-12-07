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

    long long n,ans=0;
    cin >> n;
    vector<int> x(n);
    for(int i=0;i<n;i++) cin >> x[i];
    for(int i=1;i<n;i++){
    	// if x[i] is smaller than the previous one 
    	if(x[i]<x[i-1]) {
    		// then x[i] needs x[i-1]-x[i] to be at least as large as the previous element
    		ans+=x[i-1]-x[i];
    		// update x[i]
    		x[i]=x[i-1];
		}
	}
	cout << ans << "\n";
    return 0;
}