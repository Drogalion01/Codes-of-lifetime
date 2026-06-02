#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(auto& x : a) cin >> x;
    vector<pair<int, int>> d;
    d.reserve(n);
    for(int i = 0; i < n; i++){
        if (a[i]%6 == 0) d.push_back({a[i], 1});
        else d.push_back({a[i], 0});
    }
    sort(d.begin(), d.end(), [](const pair<int, int>& a, const pair<int, int>& b){
        return a.second > b.second;
    });
    // for(auto x : d) cout << x.first << " " << x.second << endl;
    // cout << endl;
    int idx = -1;
    for(int i = 0; i < n; i++){
        if(d[i].second) cout << d[i].first << " ";
        else {
            idx = i;
            break;
        }
    }
    if(idx!=-1) {
        for(int i = idx; i < n; i++){
            if(d[i].first % 3==0) {
                d[i].second = 3;
            }
            else if(d[i].first % 2 == 0) {
                d[i].second = 2;
            }
        }
        for(int i = idx; i < n; i++){
            if(d[i].second == 2) cout << d[i].first << " ";
        }
        for(int i = idx; i < n; i++){
            if(d[i].second == 0) cout << d[i].first << " ";
        }
        for(int i = idx; i < n; i++){
            if(d[i].second == 3) cout << d[i].first << " ";
        }
    }
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