#include <bits/stdc++.h>

#define ll long long
using namespace std;

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

int isValid(string s) {
    int ans = 0;
    int p_a =0;
    int p_b = 0;
    int p_c = 0;
    set<char> seen;
    for(char c:s){
        if(c ==')' and seen.find(c)!= seen.end()){
            p_a -= 1;
            if(p_a == 0){
                ans += 1;
            }
        }
        else if(c == '(' and seen.find(c)!= seen.end()){
            seen.insert('(');
            p_a += 1;
        }
        if(c =='}' and seen.find(c)!= seen.end()){
            p_b -= 1;
            if(p_b == 0){
                ans += 1;
            }
        }
        else if(c == '{' and seen.find(c)!= seen.end()){
            seen.insert('{');
            p_b += 1;
        }
        if(c ==']' and seen.find(c)!= seen.end()){
            p_c -= 1;
            if(p_c == 0){
                ans += 1;
            }
        }
        else if(c == '[' and seen.find(c)!= seen.end()){
            seen.insert('[');
            p_c += 1;
        }

    } 
    return ans;  
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc; cin >> tc;
    for (int t = 1; t <= tc; t++) {
        string test;
        std::cin >> test;
        int ans = isValid(test);
        std::cout << ans << std::endl;
        
    }
}