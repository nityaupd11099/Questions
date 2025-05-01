#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int half=0;
    int sum=n *(n+1)/2;
    vector<int>res;
    if(sum%2!=0){
        cout<<"NO";
    }
    else{
        half=sum/2;
        cout<<"YES\n";
        for(int i=1;i<=n;i++){
            if(i<=half){
                res.push_back(i);
                half-=i;
            }
        }
    }
    cout<<res.size()<<"\n";
    for(int i=0;i<res.size();i++)cout<<res[i]<<" ";
    cout<<n-res.size()<<"\n";
    for(int i=0;i<n-res.size();i++){
        if(!i.find(res.begin() , res.end()));
        cout<<i<<" ";
    }

}


int main() {
   solve();
}
