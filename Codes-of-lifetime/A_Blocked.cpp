#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(auto& x : a) cin >> x;
    set<int> tmp;
    for(int i = 0; i < n; i++){
        tmp.insert(a[i]);
    }

    if(tmp.size() != n) cout << "-1" << endl;
    else {
        for(auto it = tmp.rbegin(); it != tmp.rend(); it++) cout << *it << " ";
        cout << endl;
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