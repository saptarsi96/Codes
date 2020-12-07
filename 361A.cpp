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

    int m,n;
    cin >> m >> n;
    int arr[m][n];
    for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(i==j)
				cout<<n<<" ";
			else
				cout<<"0 ";
		}
		cout<<"\n";
	}
	return 0;
}