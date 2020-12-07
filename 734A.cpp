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
    string test; cin >> test;
    int a=0,b=0;
    for(char i:test){
        if(i=='A') a++;
        else if(i=='D')b++;
    }
    if(max(a,b)==a && a!=b) cout << "Anton" << endl;
    else if(max(a,b)==b && a!=b) cout << "Danik" << endl;
    else if(max(a,b)==a && max(a,b)==b)cout << "Friendship" << endl;
}