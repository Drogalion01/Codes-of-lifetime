#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long x;
    cin >> x;
    int r = x/9;
    if (x%9 == 0 && (r+1)%11 != 0) cout << "10" << endl;
    else cout << "0" << endl;
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