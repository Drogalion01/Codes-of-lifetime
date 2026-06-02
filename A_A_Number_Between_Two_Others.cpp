#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll x, y;
    cin >> x >> y;
    if((x==1 || y%x) && y - x <= x) cout << "NO" << endl;
    else {
        bool flag = true;
        for(int i = 2; x*i < y; i++){
            if(y % (x*i)) {
                cout << "YES" << endl;
                return;
            }
        }
        cout << "NO" << endl;
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