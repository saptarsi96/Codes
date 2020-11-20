#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int n = a*b;
        cout << (int)(n*(n+1))/2 << endl;
    }
    return 0;
    
}