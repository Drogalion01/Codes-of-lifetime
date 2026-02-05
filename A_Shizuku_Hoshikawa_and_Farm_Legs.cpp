#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    if(n%2!=0) cout << "0" << endl;
    else if(n<4) cout << "1" << endl;
    else {
        cout << (n/4+1) << endl;
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