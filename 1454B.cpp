#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



int solve() {
    int size;
    int ans = -1;
    int min = INF;
    set<int> seen;
    cin >> size;
    vector<int> v1;
    for(int i=0;i<size;i++){
        int temp;
        cin >> temp;
        v1.push_back(temp);
    }

    for(int i=0;i<size;i++){
        if(seen.find(v1[i])==seen.end()){
            seen.insert(v1[i]);
            if(v1[i]<min){
                min = v1[i];
                ans = i+1;
            }
        }
        else{
            min = INF;
            ans = -1;
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc; cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        int answer = solve();
        cout << answer << endl;
    }
}