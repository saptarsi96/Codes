#include <bits/stdc++.h>
#define int long long
#define E "\n"
using namespace std;


main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t -- )
    {
        int a, b, c;
        cin >> a >> b >> c;
        int s = (a + b + c);
        int k = s/7;
        if(s % 9 == 0 && s / 9 <= min({a, b, c})) cout << "YES" << E;
        else cout << "NO" << E;
    }
}
