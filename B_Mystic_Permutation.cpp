#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int>p(n);
    for(auto& x : p) cin >> x;
    
    if(n == 1) {
        cout << "-1" << endl;
        return;
    }

    vector<int> q(n);
    iota(q.begin(), q.end(), 1);
    
    for(int i = 0; i < n; i++){
        if(p[i] == q[i] && i < n - 1){
            swap(q[i], q[i+1]);
            i++;
        }
        else if (i == n-1 && p[i] == q[i]) swap(q[i],q[i-1]);
    }
    for(auto x : q) cout << x << " ";
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