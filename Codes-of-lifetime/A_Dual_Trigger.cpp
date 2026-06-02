#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int z = count(s.begin(), s.end(), '0'), o = count(s.begin(), s.end(), '1');
    if (n == 2) cout << (z == 2? "YES" : "NO") << endl;
    else {
        if (o==2) {
            int idx = -1;
            for(int i = 0; i < n; i++) {
                if(s[i] == '1' && idx == -1) idx = i;
                if (s[i] == '1' && idx >= 0 && i - idx == 1) {
                    cout << "NO" << endl;
                    return;
                }
            }
            cout << "YES" << endl;
        }
        else
            cout << (o%2==0? "YES" : "NO") << endl;
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