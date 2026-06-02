#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin >> n >> k;
    vector<int>a(n);
    for(auto& x : a) cin >> x;
    sort(a.begin(), a.end());
    vector<int>tmp(n,0);
    int cnt = 1, j = 0;
    for(int i = 0; i < n-1; i++){
        if (a[i+1] - a[i] <= k) cnt++;
        else {
            tmp[j] = cnt;
            j++;
            cnt = 1;
        }
    }
    tmp[j] = cnt;
    // for(auto& x : tmp) cout << x << " ";
    // cout << endl;

    int mx = *max_element(tmp.begin(), tmp.end());
    cout << n - mx << endl;
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