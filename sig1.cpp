#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

int main()
{

    int a = fork();
    sleep(1);
    if (a == 0)
    {
        cout << "Child" << endl;
    }
    else
    {
        cout << "Parent" << endl;
    }
    sleep(1);
    return 0;
}