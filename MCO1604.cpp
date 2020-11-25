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

    int size,range;
    cin >> size;
    vector<int> v1;
    
    for(int i=0;i<size;i++){
        int temp;
        cin >> temp;
        v1.push_back(temp);
    }
    cin >> range;
    int l,r,x;
    while(range--){
        vector<int> pref;
        cin >> l >> r >> x;
        for(int i=0;i<size;i++){
            pref.push_back(v1[i] ^ x);
        }
        if(l==r){
            cout << pref[l-1] << endl;
        }
        else{
            cout << *max_element(pref.begin()+(l-1),pref.end()+(r-1)) << endl;
        }
        
    }

}



