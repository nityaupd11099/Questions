#include <bits/stdc++.h>
using namespace std;
void solve(int n , char from , char to , char aux ){
    if(n==1){
        cout<<from <<" "<<to<<endl;
        return;
    }
    solve(n-1,from , aux , to );
    cout<<from<<" " <<to<<endl;

    solve(n-1,aux,to,from );

}


int main() {
    int n;
    cin>>n;
    int count=pow(2 , n)-1;
    cout<<count<<endl;
    solve(n , '1' , '3' , '2');
}
