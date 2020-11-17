#include<iostream>
#include<vector>

using namespace std;

int boring(int num){
    int flag = 1;
    std::vector<int> v1;
    while(num!=0){
        int rem = num%10;
        v1.insert(v1.begin(),rem);
        num /= 10;
    }
    for(int i=0; i< v1.size(); i +=2){
        if(v1[i]%2 != 1){
            flag = 0;
            break;
        }
    }
    for(int i=1; i< v1.size(); i +=2){
        if(v1[i]%2 != 0){
            flag = 0;
            break;
        }
    }
    return flag;
}

int main(){
    int t;
    std::cin >> t;
    for(int tester=0;tester<t;tester++){
        int l,r,ans=0;
        std::cin >> l >> r;
        for(int test=l;test<=r;test++){
            if(boring(test)== 1) ans++;
        }
        std::cout << "Case #" << tester+1 << ": " << ans << std::endl;
    }

}