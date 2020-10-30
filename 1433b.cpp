#include<bits/stdc++.h>
using namespace std;
double maximumExpectedMoney(int n, int m, double p[], double x[], double y[] )
{
    vector<double> profits;
    for(int i=0;i<n;i++){
        profits.push_back(-1);
    }
    for(int i=0;i<n;i++)
        profits[i] = p[i] * x[i] - ( (1-p[i]) * y[i] );
    sort(profits.begin(), profits.end(), greater<double>()); 
    double ans = 0;
    for(int i=0; i<m; i++){
        if(profits[i]<0)
            continue;
        else
            ans += profits[i];
    }
    return ans;
        

}


int main(){
    int n, m;

    cin >> n >> m;
    double p[n], x[n], y[n];

    for(int i = 0; i < n; i++)
        cin >> p[i];
    for(int i = 0; i < n; i++)
        cin >> x[i];
    for(int i = 0; i < n; i++)
        cin >> y[i];

    double result=maximumExpectedMoney(n,m,p,x,y);

    // Do not remove below line
    cout << result << setprecision(2) << endl;
    // Do not print anything after this line

    return 0;
}