#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& x : a) cin >> x;
    int s = 0, o = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 67){
            s++;
        }
        if(a[i] == 1) o++;
    }
    if(s>0 && o > 0) cout << "YES" << endl;
    cout << "NO" << endl;
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