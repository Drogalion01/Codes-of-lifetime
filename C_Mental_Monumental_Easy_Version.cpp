#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int mex(vector<int>& a, int l, int r){
    map<int, int>m;
    for(int i = l; i < r; i++) m[a[i]]++;
    int mex = 0;
    while (m[mex] > 0) mex++;
    return mex;
}

void solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(auto& x : a) cin >> x;
    sort(a.begin(), a.end());
    if(mex(a, 0, n) == n) {
        cout << n << endl;
        return;
    }
    int ans, c = 0, ;
    for(int i = 0; i < n - 1; i++){
        if(a[i] + 1 == a[i+1]) {
            c = a[i+1] - a[i];
        }
        
    }

    // map<int, int>serial;
    // for(int i = 0; i < n; i++) serial[a[i]]++;
    // int c = 0, k = 0, ans = 0;
    // for(auto i = serial.begin(); i != serial.end(); i++){
    //     if (i->first == c) {
    //         k++;
    //         c++;
    //     }
    //     else {
    //         c = i->first;
    //         ans = max(ans, k+1);
    //         k = 1;
    //     }
    // }
    // ans = max(ans, k+1);
    cout << ans << endl;
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