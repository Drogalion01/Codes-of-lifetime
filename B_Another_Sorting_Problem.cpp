#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(auto& x : a) cin >> x;
    int tmp = 0;
    for(int i = 0; i+1 < n; i++){
        if(a[i] > a[i+1]) {
            tmp = max (tmp, a[i] - a[i+1]);
        }
    }
    for(int i = 0; i+1 < n; i++){
        if(a[i] > a[i+1]) {
            a[i+1] += tmp;
        }
    }
    for(int i = 0; i+1 < n; i++){
        if(a[i] > a[i+1]) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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