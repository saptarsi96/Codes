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

    ll d1,v1,d2,v2,p;
    cin >> d1 >> v1 >> d2 >> v2 >> p;
    ll ans = 0;
    ll sum = 0;
    if(d1>d2){
        sum += (d1-d2)*v2;
        ans += (d1-d2);
    }
    else{
        if((abs(d1-d2)*v1)>=p){
            ans += ceil((double)p/v1);
            ans += d1-1;
        }
        else{
            sum += (d2-d1)*v1;
            ans += (d2-d1);
        }
        
    }
    if(sum>p){
        cout << ans << endl;
    }
    else{
        ans += ceil((double)(p-sum)/(v1+v2));
        ans += min(d1,d2)-1;
        cout << ans << endl;
    }
    
    
    


}