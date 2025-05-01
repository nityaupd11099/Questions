#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>res;
    res.push_back(n);
    if(n%2==0 && n>0){
       res.push_back(n/2);
       n=n/2;
    }
    else{
        res.push_back((n*3)+1);
        n=n*3+1;
    } 

    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}


int main() {
    solve();
}
