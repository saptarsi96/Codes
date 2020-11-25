#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>

using namespace std;

string s1,s2;

int main() {
  //freopen("a.in","r",stdin);

  getline(cin,s1);
  getline(cin,s2);
  
  for (int i=0;i<s1.size();++i) {
    if (s1[i]>=97) s1[i]-=32;
    if (s2[i]>=97) s2[i]-=32;
  }
  
  if (s1==s2) printf("0\n");
  else {
    if (s1<s2) printf("-1\n");
    else printf("1\n");
  }
}