#include <bits/stdc++.h>
using namespace std;
 
int smallest(int a, int b, int c){
    if(a<b&&a<c){
        return a;
    }else if(b<a&&b<c){
        return b;
    }else{
        return c;
    }
}
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t>0){
	    
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    int s = a+b+c - 3;
	    int turns = s/9;
	    int rem = s%9;
	    
	    int small = smallest(a,b,c);
	    
	    if(turns < small && rem==6){
	        cout<<"yes"<<endl;
	    }else{
	        cout<<"no"<<endl;
	    }
	    
	    t--;
	}
	return 0;
}