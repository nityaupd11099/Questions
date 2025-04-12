#include <bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    string s;
    cin>> s;
    int count=0;
    for(int i=1;i<n-1;i++){
        if(s[i]=='.' && s[i-1]=='#' && s[i+1]=='#'){
            s[i]='#';
        }
        else if(s[i]=='.'  && s[i+1]=='.')count++;
        else if(s[i]=='.' && s[i+1]=='.'){
            s[i]='#';
            count++;
        }
    }
    return count;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       cout <<solve() << endl;
    }
}
