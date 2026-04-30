#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n, k, p, m;
    cin >> n >> k >> p >> m;
    vector<int> a(n);
    for(auto& x : a) {
        cin >> x;
    }
    vector<pair<int, bool>> d(n);
    for(int i = 0; i < n; i++){
        d[i].first = a[i];
        if(i==p-1) d[i].second = true;
        else d[i].second = false;
    }
    int cnt = 0;
    
    while(true) {
        ll mn = INT_MAX, idx = -1;
        for(int i = 0; i < k; i++){
            if(d[i].second) {
                idx = i;
                break;
            }
            else if (mn > d[i].first){
                idx = i;
                mn = d[i].first;
            }
        }
        if(idx == -1 || m < d[idx].first) break;
        m-=d[idx].first;
        if(d[idx].second) cnt++;
        vector<pair<int, bool>> tmp;
        tmp.reserve(n);
        for(int i = 0; i < idx; i++){
            tmp.push_back(d[i]);
        }
        for(int i = idx+1; i < n; i++){
            tmp.push_back(d[i]);
        }
        tmp.push_back(d[idx]);

        d.swap(tmp);
    }
    cout << cnt << endl;
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