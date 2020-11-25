#include <bits/stdc++.h>
#include<ctype.h>

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
    string vowels = "aeiouyAEIOUY";
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    string test;
    getline(cin,test);
    int top = test.size();
    while(!isalpha(test[top])){
        top--;
    }
    int found = vowels.find(test[top]);
    if(found < vowels.length()){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
}