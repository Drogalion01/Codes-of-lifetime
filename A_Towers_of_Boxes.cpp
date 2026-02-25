#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, m, d;
    cin >> n >> m >> d;
    
    int tmp = d/m + 1;
    if(m > d) cout << n << endl;
    else {
        cout << n / tmp + min(n % tmp, 1) << endl;
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