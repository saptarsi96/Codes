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
    int c=0,bi=0,ba=0;
    vector<int> excersise;
    for (int t = 1; t <= tc; t++) {
        int temp; cin >> temp;
        excersise.push_back(temp);
    }
    for(int i=0;i<=tc-1;i+=3)
        c += excersise[i];
    for(int i=1;i<=tc-1;i+=3)
        bi += excersise[i];
    for(int i=2;i<=tc-1;i+=3)
        ba += excersise[i];
    if(c>bi and c>ba){
        cout << "chest" << endl;
    }
    else if(bi>c and bi>ba){
        cout << "biceps" << endl;
    }
    else{
        cout << "back" << endl;
    }

}