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

    string test;
    cin >> test;
    int count=1,ans=-1;
    for(int i=0;i<test.size()-1;i++){
        if(test[i] == test[i+1]){
            count++;
        }
        else{
            ans = max(ans,count);
            count = 1;
        }
    }
    ans = max(ans,count);
    cout << ans << endl;
    return 0;
}

    