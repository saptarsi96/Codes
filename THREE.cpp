#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

int count_palindromic_slices(const string &S) {
        int count = 0;

        for (int position=0; position<S.length(); position++) {
            int offset = 0;

            // Check the "aa" situation
            while((position-offset>=0) && (position+offset+1)<S.length() && (S.at(position-offset))==(S.at(position+offset+1))) {
                count ++;
                offset ++;
            }

            offset = 1;  // reset it for the odd length checking
            // Check the string for "aba" situation
            while((position-offset>=0) && position+offset<S.length() && (S.at(position-offset))==(S.at(position+offset))) {
                count ++;
                offset ++;
            }
        }
        return count;
    }


void solve() {

    
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