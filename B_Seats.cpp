#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int z = count(s.begin(), s.end(), '0'), o = count(s.begin(), s.end(), '1');

    if(o > (n + 2)/3) cout << o << endl;
    else if (n > 2 && (s[0] == '1' || s[2] == '1') && (s[n-1] == '1' || s[n-3] == '1' || n==3) && n%2) cout << (n + 2)/3 + 1 << endl;
    else cout << (n + 2)/3 << endl;
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