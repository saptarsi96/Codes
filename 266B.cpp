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
void swap(char& a,char& b){
    a = a + b;
    b = a - b;
    a = a - b;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc; cin >> tc;
    for (int t = 1; t <= tc; t++) {
       vector<char> v1;
       int size,k;
       cin >> size >> k;
       string query;
       getline(cin,query);
       for(char c:query){
           v1.push_back(c);
       }
       int counter = 0;
       for(int i=0;i<size;i++){
           for(int j=i;j<size;j++){
               if(v1[i] == 'B' and v1[j] == 'G' and counter<k){
                   swap(v1[i],v1[j]);
                   counter += 1;
               }
           }
       }
       string answer;
       for(char c:v1){
           answer += c;
       }
       cout << answer << endl;


    }
}