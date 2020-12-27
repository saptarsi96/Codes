#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

bool checkDivisibility(ll n, ll digit) 
{ 
    // If the digit divides the number 
    // then return true else return false. 
    if(digit!=0)
        return ( n % digit == 0);
    else
        return true;
} 
  
// Function to check if all digits 
// of n divide it or not 
bool allDigitsDivide(ll n) 
{ 
    ll temp = n; 
    while (temp > 0) { 
  
        // Taking the digit of the 
        // number into digit var. 
        int digit = temp % 10; 
        if (!(checkDivisibility(n, digit))) 
            return false; 
  
        temp /= 10; 
    } 
    return true; 
} 

void solve() {
    ll n;
    cin >> n;
    for(ll i=n;i<=LINF;i++){
        if(allDigitsDivide(i)){
            cout << i << endl;
            break;
        }        
    }
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