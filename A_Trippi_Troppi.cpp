#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    //cin.ignore();
    getline(cin, s);
    cout<<s[0];
    for(int i=1;i<s.size() ; i++){
        if(s[i]==' ' && i+1<s.size()){
            cout<<s[i+1];
        }
    }
   cout<<endl; 
}


int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
       solve() ;
    }
}
