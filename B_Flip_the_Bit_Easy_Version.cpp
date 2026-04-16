#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    for(auto& x : a) cin >> x;
    int ik;
    cin >> ik;
    int cl = 0, cr = 0, t = a[0];
    for(int i = 1; i < n; i++){
            if(t!=a[i]) {
                if(i < ik) cl++;
                else cr++;
            } 
            t = a[i];
    }
    // cout << cl << " " << cr << endl;
    int out = max(cl, cr);
    if(out%2) out++;
    cout << out << endl;
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