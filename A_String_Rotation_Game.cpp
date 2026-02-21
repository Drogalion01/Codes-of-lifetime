#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a(26, 0);
    int cnt = 1, sm = 0;
    
    for(int i = 0; i < n-1; i++){
        if(s[i] != s[i+1]) {
            cnt++;
        }
        else {
            sm++;
        }
    }
    if(sm && cnt > 1 && s[0] != s[n-1]) cout << cnt+1 << endl;
    else cout << cnt << endl;
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