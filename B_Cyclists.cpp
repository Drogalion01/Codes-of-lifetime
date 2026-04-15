#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, k, p, m;
    cin >> n >> k >> p >> m;
    vector<int> a(n);
    vector<int, vector<int>> tmp(2, vector<int>(n));
    for(auto& x : a) {
        cin >> x;
    }
    for(int i = 0; i < n; i++){
        tmp [0] = a[i];
        tmp [1] = i;
    }
    if(a[p-1] > m) {
        cout << "0" << endl;
        return;
    }
    int pc = m/a[p-1];
    sort (tmp.begin(), tmp.end());

    if(p > k) {
        
    }
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