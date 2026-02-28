#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector <int> a(n);
    for(auto& x : a) cin >> x;
    int mx = *max_element(a.begin(), a.end());
    // int tmp = ((2*mx)/3)*3;
    // cout << tmp << endl;
    vector <int> q(n);
    set<int>acc;
    for(int i = 0; i < n; i++){
        if(a[i]%3 == 0) q.push_back(a[i]);
        else q.push_back(((a[i]+2)/3)*3 - a[i]);
    }
    for(auto& x : q) cout << x << " ";
    cout << endl;
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