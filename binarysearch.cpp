#include<bits/stdc++.h>

using namespace std;

void binarysearch(vector<int> arr,int x){

    int left = 0;
    int right = arr.size()-1;
    while(left<=right){
        int mid = left + (right-left)/2;
        if(arr[mid]==x){
            cout << "Found at index: "<< mid << endl;
            return;
        }
        else if(arr[mid]<x){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    cout << "Not Found!" << endl;
}


void squrarchecker(int n){
    int left = 1;
    int right = n;
    while(left<=right){
        int mid = left + (right-left)/2;
        if(mid*mid==n){
            cout << "Square root found: "<< mid << endl;
            return;
        }
        else if(mid*mid<n){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    cout << "No square root for this element!" << endl;

}

void binarystl(vector<int> arr,int x){
    
    auto it1 = std::lower_bound(arr.begin(),arr.end(),x);
    cout << "Element found at index: " << it1-arr.begin() << endl;
}

void search(vector<bool> array) {

    int low = 0, mid;
    int high = array.size() - 1;
    bool booleanValue;

    while (low <= high) {
        mid = low + (high-low)/2;
        booleanValue = array[mid];
        if (booleanValue) low = mid + 1;
        else if (low == mid) cout << "element found at:"  << mid << endl;
        else high = mid;
    }
    cout << "-1" << endl;
}

int main(){

    vector<int> arr = {1,2,3,4,5,6};
    binarystl(arr,6);
    squrarchecker(16);
}