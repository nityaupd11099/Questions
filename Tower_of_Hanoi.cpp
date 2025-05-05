#include <bits/stdc++.h>
using namespace std;
void solve(int n , char from , char to , char aux , int count){
    if(n==1){
        cout<<count<<endl;
        cout<<from <<to<<endl;
        return;
    }
    solve(n-1,from , aux , to , count);
    cout<<n<<from<<to<<endl;

    solve(n-1,aux,to,from , count);
    count++;

}


int main() {
    int n;
    cin>>n;
    int count=0;
    solve(n , '1' , '3' , '2' ,count);
}
