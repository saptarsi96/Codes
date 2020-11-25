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
    int arr[5][5];
    int li=-1,ri=-1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int temp;
            cin >> temp;
            arr[i][j] = temp;
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j] == 1){
                li = i;
                ri = j;
            }
        }
    }
    cout << abs(2-li)+abs(2-ri) << endl;
    
}