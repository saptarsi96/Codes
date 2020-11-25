#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cassert>
#include <ctime>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <sstream>
#include <bitset>
using namespace std;

#define sz(a) int(a.size())
const int N = 0;

int a[128];

int main() {

    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int x; scanf("%d", &x);
        a[x] = i;
    }
    
    for (int i = 1; i <= n; i++) printf("%d ", a[i]);

    return 0;
}
