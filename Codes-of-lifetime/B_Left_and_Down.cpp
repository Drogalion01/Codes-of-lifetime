#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long a, b, k;
    cin >> a >> b >> k;
    long long tmp = gcd (a, b);
    if((a <= k && b <= k) || (a/tmp <= k && b/tmp <= k && tmp != 1)) cout << "1" << endl;
    else cout << "2" << endl;
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