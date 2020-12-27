#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> v1;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        v1.push_back(temp);
    }
    sort(v1.begin(),v1.end());
    int ans = 0;
    int index = 0;
    while(m!=0){
        if(v1[index]<=0) ans += v1[index];
        index += 1;
        m -= 1;
    }
    if(ans<0){
        ans = ans*(-1);
    }
    cout << ans << endl;
}