#include<bits/stdc++.h>

using namespace std;

bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3){
            return false;
        }
        int low = 0;
        int high = arr.size()-1;
        bool ans = false;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1]){
                ans = true;
                break;
            }
            else if(arr[mid]>arr[mid-1] and arr[mid+1]>arr[mid]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return ans;
    }

int main(){
    vector<int> arr = {3,5,6};
    auto ans = validMountainArray(arr);
    cout << ans << endl;

}
