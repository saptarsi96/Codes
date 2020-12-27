#include <bits/stdc++.h>
using namespace std;

// Function to return list of
// total Distance of each element
// from other elements in array
vector<int> calculate(int arr[],
                      int n)
{
    int sub = 0;
    int sum = 0;

    // Initialize the arraylist
    vector<int> ans;

    // Keep track of the
    // accumulated of the
    // sum of values to right
    for (int i = n - 1;
         i >= 0; i--)
        sum += arr[i];

    // Keep track of the
    // accumulated subtraction
    // of the values to the left
    for (int i = 0; i < n; i++)
    {
        sum -= arr[i];

        // Add the value to the
        // resultant array ans[]
        ans.push_back(sub + (i * arr[i]) -
                      ((n - i - 1) *
                       arr[i]) +
                      sum);

        sub -= arr[i];
    }

    // Return the final
    // answer
    return ans;
}

// Driver Code
int main()
{
    // Initialize the array
    int arr[] = {2, 3, 5};
    int n = sizeof(arr) /
            sizeof(arr[0]);
    vector<int> ans = (calculate(arr, n));

    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
}
