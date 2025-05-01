#include <bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int count=0;
    for(int i=1;i<n;i++){
        if(nums[i]-nums[i-1]<0){
            count+=abs(nums[i]-nums[i-1]);
        }
    }
    return count ;
}


int main() {
   cout << solve();
}
