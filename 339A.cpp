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

    string str;
    cin >> str;
    vector<int> digs;
    string answer;
    for(auto i:str){
        if(isdigit(i)) digs.push_back(i);
    }
    sort(digs.begin(),digs.end());
    for(auto i:digs){
        answer += to_string(i-'0');
        answer += "+";
    }
    for(int i=0;i<answer.size()-1;i++){
        cout << answer[i];
    }
    cout << endl;
    
}