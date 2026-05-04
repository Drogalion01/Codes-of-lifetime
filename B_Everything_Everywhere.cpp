#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector<ll>a(n);
    for(auto& x : a) cin >> x;
    ll c = 0;

    for(int i = 0; i < n-1; i++){
        if(abs(a[i] - a[i+1]) == gcd(a[i], a[i+1])) c++;
    }
    cout << c << endl;
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