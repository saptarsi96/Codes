#include<bits/stdc++.h>

using namespace std;

int ans = 0;
int digSum(int n) 
{ 
    ans += 1;
    if (n == 0)  
       return 0; 
    return (n % 9 == 0) ? 9 : (n % 9); 
} 

int main(){
    int input;
    cin >> input;
    digSum(input);
    cout << ans << endl;
}