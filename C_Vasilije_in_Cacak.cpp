#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n , k , x;
    cin>>n>>k>>x;
    long long min_sum=(k*(k+1))/2;
    long long max_sum=(n*(n+1))/2-((n-k)*(n-k+1))/2;
    if (x>=min_sum && x<=max_sum){
        cout<<"YES";
    }
    else cout<<"NO";
}


int main() {
    int t;
    cin >> t;
    while (t--) {
     solve();
       cout << endl;
    }
}
