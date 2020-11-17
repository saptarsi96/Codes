#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int main() {

  int t, size;
  cin >> t;
  while (t--) {
    int input, ans = 0;
    vector<int> q1;
    cin >> size;
    for (int i = 0; i < size; i++) {
      cin >> input;
      q1.push_back(input);
    }
    while(q1.size()>1){
      sort(q1.begin(),q1.end());
      int a = q1.back();
      q1.pop_back();
      int b = q1.back();
      q1.pop_back();
      ans += min(a,b);
      q1.push_back(a-b);
    }
    ans += q1.back();
    cout << ans << endl;
  }
}