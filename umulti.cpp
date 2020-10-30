#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    multiset <int> u1 = {1,2,3,4,6,7,8,8,10,5};
    auto pos = u1.find(1);
    vector<int> u2 = {29,32,34,90,99};
    auto it = find(u2.begin(),u2.end(),90);

    cout << "90 is present in " << distance(u2.begin(),it) << endl;

    cout << "Found at: " << *pos << endl;

    auto position = std::find(u1.begin(),u1.end(),8);
    cout << "The element is at " << *position - *(u1.begin()) << endl;


    for (auto it = u1.begin(); it != u1.end(); it++) 
        cout << *it << " "; 
  
    for (auto it = pos; it != u1.end(); it++) 
        cout << *it << " "; 

    cout << "8 is there" << u1.count(8) << " times" << endl;


    return 0;
}