#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n, s = 0;
    cin >> n;
    vector<ll> a(n);
    for(auto& x : a) {
        cin >> x;
        if(x!=1) s+=x;
    }
    if(a[n-1]==1) s++;
    cout << s%676767677<< endl;
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