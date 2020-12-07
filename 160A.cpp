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
    vector<int> v1;
    int ans = 0;
    int sum = 0;
    for (int t = 1; t <= tc; t++) {
       int temp;cin>>temp;
       v1.push_back(temp);
       sum += temp;
    }
    int ptr = 0;
    sort(v1.rbegin(),v1.rend());
    for(int i=0;i<tc;i++){
        if(ptr<ceil((float)sum/2)){
            ptr += v1[i];
            ans += 1;
        }
        else{
            break;
        }
    }
    cout << ans << endl;

}