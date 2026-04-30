#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    string s;
    cin >> n >> s;
    if(count(s.begin(), s.end(), '(') != count(s.begin(), s.end(), ')')) {
        cout << "NO" << endl;
        return;
    }
    else cout << "YES" << endl;
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