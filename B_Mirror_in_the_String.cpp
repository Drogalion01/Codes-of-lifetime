#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll idx = 0;
    for(int i = 0; i+1 < n; i++){
        if(s[i] > s[i+1]) idx=i+1;
        else if(s[i]==s[i+1]) {
            if(idx==0) break;
            else idx = i+1;
        }
        else break;
    }
    for(int i = 0; i <= idx; i++) cout << s[i];
    for(int i = idx; i >= 0; i--) cout << s[i];
    cout << endl;
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