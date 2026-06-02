#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    int y = 0, n = 0, t = s.length();
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'Y') y++;
    }
    if(y > 1) cout << "NO" << endl;
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