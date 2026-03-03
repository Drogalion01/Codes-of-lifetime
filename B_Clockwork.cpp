#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector <int> a(n);
    for(auto& x : a) cin >> x;
    vector<pair<int,int>> tmp(n);
    for(int i = 0; i < n; i++){
        tmp[i].first = a[i];
        tmp[i].second = i+1;
    }
    sort(tmp.begin(), tmp.end());\
    // for(int i = 0; i < n; i++){
    //     cout << tmp[i].first << " " << tmp[i].second << endl;
    // }
    for(int i = 0; i < n; i++){
        if(tmp[i].first <= (tmp[i].second - 1)*2 || tmp[i].first <= (n-tmp[i].second)*2) {
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