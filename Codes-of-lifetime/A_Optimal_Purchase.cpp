#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n, a, b;
    cin >> n >> a >> b;
    if(a > b/3) cout << (n/3) * b + min(b, a*(n%3)) << endl;
    else cout <<  n*a << endl;    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_case;
    cin >> test_case;
    while(test_case--){
        solve();
    }
    return 0;
}