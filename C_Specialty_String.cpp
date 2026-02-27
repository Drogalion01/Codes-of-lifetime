#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n == 1) cout << "NO" << endl;
    else {
        // vector<int>alp(26, 0);;
        // for(int i = 0; i < n; i++){
        //     alp[s[i] - 'a']++;
        // }
        // for(int i = 0; i < 26; i++){
        //     if(alp[i] != 0 && alp[i]%2 != 0) {
        //         cout << "NO" << endl;
        //         return;
        //     }
        // }
        vector <char> tmp (s.begin(), s.end());
        bool f = false;
        while(!tmp.empty()) {
            f = false;
            for(int i = 0; i < (int)tmp.size()-1; i++){
                if (tmp[i] == tmp[i+1]) {
                    tmp.erase(tmp.begin()+i);
                    tmp.erase(tmp.begin()+i);
                    i = max(-1, i-2);
                    f = true;
                }
            }
            if(!f) {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
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