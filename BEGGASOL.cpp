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
        int size;
        cin >> size;
        vector<int> v1;
        vector<int> ans(100,0);
        int answer = 0;
        for(int i=0;i<size;i++){
            int temp;
            cin >> temp;
            v1.push_back(temp);
        }
        for(int i=size;i<10;i++){
            v1.push_back(0);
        }
        int val = v1[0];
        ans[1]=v1[0]+v1[1]-1;
        for(int i=2;i<10;i++){
            ans[i] = ans[i] + v1[i]-1;
        }
        for(int i:ans){
            if(i>0) answer++;
        }
        cout << answer+1 << endl;


        


    }
}