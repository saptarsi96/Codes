#include <bits/stdc++.h>

using namespace std;

int main()

{

    int size, count = 0, ans = -1;
    vector<int> array;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        array.push_back(temp);
    }
    for (int i = 0; i < size; i++)
    {
        if (array[i] == 0)
        {
            count = 0;
            ans = max(ans, count);
        }
        else
        {
            count++;
            ans = max(ans, count);
        }
    }
    cout << ans << endl;
}
