#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;    
    if (n <= 3) return true;       

    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

string solve(){
    long long x;
    int k;
    cin>>x>>k;
    string repeated;
    for (int i = 0; i < k; ++i) {
        repeated += x;
    }
    return isPrime(x)?"YES" :"NO";
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       cout <<solve() << endl;
    }
}
