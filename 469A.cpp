#include <set>
#include <cstdio>
#include <iostream>

using namespace std;

set<int> a;

int main() {
        int n;
        while (cin>>n) {
                int t,tmp;
                a.clear();
                cin>>t;
                for (int i = 0; i < t; i++) {
                        scanf("%d",&tmp);
                        a.insert(tmp);
                }
                cin>>t;
                for (int i = 0; i < t; i++) {
                        scanf("%d",&tmp);
                        a.insert(tmp);
                }
                if (a.size() == n) cout<<"I become the guy."<<endl;
                else cout<<"Oh, my keyboard!"<<endl;
        }
}
