#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void swap(int &x,int &y) {
    x = x+y;
    y = x-y;
    x = x-y;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc; cin >> tc;
    if(tc%2==1){
        cout << -1 << endl;
        return 0;
    }
    vector<int> ans;
    for (int t = 1; t <= tc; t++) {
        ans.push_back(t);
    }
    if(tc%2==0){
        for(int i=0;i<tc-1;i+=2){
            swap(ans[i],ans[i+1]);
        }
    }
    for(int i:ans){
        cout << i << " ";
    }cout << endl;

    
}