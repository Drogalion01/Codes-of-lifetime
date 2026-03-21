#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, k, x;
    cin >> n >> k >> x;
    if(x >= ((k*(k+1))/2) && x <= (k*(2*n - k + 1))/2) cout << "YES" << endl;
    else cout << "NO" << endl;
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