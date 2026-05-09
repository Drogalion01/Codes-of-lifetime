#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll mex(vector<ll>& a, int l, int r){
    map<ll, int>m;
    for(int i = l; i < r; i++) m[a[i]]++;
    int mex = 0;
    while (m[mex] > 0) mex++;
    return mex;
}
void solve(){
    int n;
    cin >> n;
    vector<ll>a(n);
    for(auto& x : a) cin >> x;

    ll m = mex(a, 0, n);
    ll mx = *max_element(a.begin(), a.end());

    ll sum = 0, c = 1;
    for(int i = 0; i < n; i++){
        if(i == 0) sum += max(mx, 1LL);
        else if(mx != 0 && mx >= m && i < m && i < n-1) {
            sum += c + mx;
            c++;
        }
        else if(mx != 0 && mx < m && i - 2 < m && i < n-1) {
            sum += c + mx;
            c++;
        }
        else sum += m + mx;
    }
    cout << sum << endl;
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