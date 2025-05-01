#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>num(n-1);
    for(int i =0;i<n-1;i++)cin>>num[i];
    int sum=0;
    int tot_sum=(n*(n+1))/2;
    for(int i=0;i<n-1;i++){
        sum+=num[i];
    }

cout<<tot_sum-sum;
}


int main() {
     solve();
}
