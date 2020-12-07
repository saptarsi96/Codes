#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

int subarrays(vector<int> arr, int n,int k) 
{ 
    int ans = 0;
    for (int i=0; i <n; i++) 
    { 
        for (int j=i; j<n; j++) 
        {   
            int sum = 1;
            for (int k=i; k<=j; k++){
                sum *= arr[k];
            }
            if(sum<k){
                ans += 1;
            }
        } 
    }
    return ans; 
} 

void solve() {
    int x,size;
    vector<int> v1;
    cin >> x >> size;
    for(int i=0;i<size;i++){
        int temp;
        cin >> temp;
        v1.push_back(temp);
    }
    int answer = subarrays(v1,size,x);
    cout << answer << endl;

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