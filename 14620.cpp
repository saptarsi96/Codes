#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {
    int s;
    cin >> s;
    vector<int> v1;
    while(s--){
        int temp;
        cin >> temp;
        v1.push_back(temp);
    }
    vector<int> answer(v1.size(),0);
    int left = 0;
    int right = v1.size()-1;
    int ptr = 0;
    while(ptr<=v1.size()){
        answer[ptr] = v1[left];
        left += 1;
        ptr += 1;
        answer[ptr] = v1[right];
        right -= 1;
        ptr += 1;
    }
    for(int i:answer){
        cout << i << " ";
    }
    cout << endl;

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
    return 0;
}