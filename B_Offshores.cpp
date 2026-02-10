#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, x, y;
    cin >> n >> x >> y;
    vector <long long> a(n);
    for(auto& x : a) cin >> x;
    
    long long s = 0;
    for(int i = 0; i < n; i++){
        s+=(a[i]/x) * y;
    }
    long long fi = 0, mx = 0;
    for(int i = 0; i < n; i++) {
        fi = s - (a[i]/x) * y + a[i];
        mx = max(mx, fi);
    }
    cout << mx << endl;
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