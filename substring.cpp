#include <bits/stdc++.h>

using namespace std;

void substrings(string s, int n)
{
    for (int i = 0; i < n; i++)
        for (int len = 1; len <= n-i; len++)
            cout << s.substr(i, len) << endl;
}

void subarrays(int arr[], int n) 
{ 

    for (int i=0; i <n; i++) 
    { 
        for (int j=i; j<n; j++) 
        {
            for (int k=i; k<=j; k++) 
                cout << arr[k] << " "; 
  
            cout << endl; 
        } 
    } 
} 

int main()
{

    string t;
    cin >> t;
    int arr[] = {1, 2, 3};
    //substrings(t,t.size());
    subarrays(arr, 3);
}