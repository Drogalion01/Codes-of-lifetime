#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(auto& x : a) cin >> x;
    vector<int> ugly;
    int mx = 0;
    for(int i = 0; i < n; i++){
        mx = max(mx, a[i]);
        if(mx == i+1) {
            ugly.push_back(i);
        }
    }
    // for(auto& x : ugly) cout << x << " ";
    // cout << endl;
    if (ugly.empty()) {
        for(auto& x : a) cout << x << " ";
        cout << endl;
        return;
    }
    if(ugly.size() < 2) {
        auto tmp = find(a.begin(), a.end(), ugly[0]+1);
        int val = *tmp;
        a.erase(tmp);
        a.push_back(val);
    }
    else {
        auto it1 = find(a.begin(), a.end(), ugly[0]+1), it2 = find(a.begin(), a.end(), ugly[1]+1);
        swap (a[it1-a.begin()], a[it2-a.begin()]);
    }
    for(auto& x : a) cout << x << " ";
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