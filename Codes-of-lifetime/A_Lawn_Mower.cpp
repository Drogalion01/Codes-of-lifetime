#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, w;
    cin >> n >> w;
    if (w == 1) cout << "0" << endl;
    else cout << n-(n/w) << endl;
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