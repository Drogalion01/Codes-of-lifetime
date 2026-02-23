#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long x, y;
    cin >> x >> y;
    if((x - 2*y) % 3 != 0) {
        cout << "NO" << endl;
        return;
    }
    
    long long tmp = (x-2*y)/3;

    if (tmp < 0) {
        cout << "NO" << endl;
        return;
    }

    long long t2 = max(0LL, -y);
    if(t2 > tmp/2) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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