#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector <int> a(n);
    map<int,int, greater<int>> m;
    for(auto& x : a) {
        cin >> x;
        m[x]++;
    }
    auto it = m.begin();
    int cnt = 0;
    for(int i = n - 1; i >= 0 && it != m.end(); i--){
        if(it->first==a[i] && it->second > 0) {
            cnt++;
        }
        m[a[i]]--;
        // cout << m[a[i]] << " " << it->first << " " << it -> second<< endl;
        while(!it->second && it != m.end()) it++;
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