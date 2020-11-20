#include<bits/stdc++.h>

using namespace std;

int main(){
    

    int t;
    cin >> t;
    while(t--){
        int n,ans = 0;
        cin >> n;
        for(int i=1;i<=n;i++){
            if(i%2==0 and (n-i)%2==1) ans++;
        }
        cout << ans << endl;

    }
}