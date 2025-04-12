#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    set<int>countt;
    for(int i=0;i<n;i++)cin>>a[i];
    int occ;
    for(int i=0;i<n;i++){
        countt.insert(a[i]);
    }
    cout<< ((countt.size()<=2)?"YES":"NO");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
      solve() ;
       cout << endl;
    }
}
