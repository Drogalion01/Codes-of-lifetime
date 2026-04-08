#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long a, b;
    cin >> a >> b;
    if((long long)(a*b+a)%(a*b)==0) cout << "NO" << endl;
    else {
    cout << "YES" << endl;
    cout << 1LL*a*b*2 << " " << a << " " << 1LL*a*b*2+a << endl;
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