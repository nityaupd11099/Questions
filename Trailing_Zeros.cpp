#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n<1)return 0;
    return fact(n-1)*n;
}
void solve(){
    int n;
    cin>>n;
    string s=to_string(fact(n));
    int count=0;
    for(int i=s.size()-1;i>=0 ;i--){
        if(s[i]==0 && s[i+1]!=0){
            count++;
        }
    }
    cout<<count;
}


int main() {
    solve();
}
