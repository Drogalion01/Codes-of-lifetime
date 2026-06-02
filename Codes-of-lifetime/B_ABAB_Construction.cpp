#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    char tmp;
    bool t = false;
    if(n%2) {
        for(int i = 0; i < n; i++){
            if((i+1) % 2) {
                if(i==0 && s[i] != 'a' && s[i] != '?') {
                    cout << "NO" << endl;
                    return;
                }
                // else if (i==0 && (s[i] == 'a' || s[i] == '?')) {
                //     tmp = 'a';
                // }
                else if (i && tmp == 'a'){
                    if(s[i] != 'b' && s[i] != '?'){
                        cout << "NO" << endl;
                        return;
                    }
                }
                else if (i && tmp == 'b'){
                    if (s[i] != 'a' && s[i] != '?') {
                        cout << "NO" << endl;
                        return;
                    }
                }
                else if (i && tmp == ' ' && s[i] == '?' && t){
                    continue;
                }
            }
            else {
                if(s[i] == 'a'){
                    tmp = 'a';
                }
                else if(s[i] == 'b') {
                    tmp = 'b';
                }
                else if (s[i] == '?') {
                    tmp = ' ';
                    t = true;
                }
            }
        }
        cout << "YES" << endl;
        return;
    }
    else {
        for(int i = 0; i < n; i++){
            if((i+1) % 2) {
                if (s[i] == 'a') tmp = 'a';
                else if (s[i] == 'b') tmp = 'b';
                else if (s[i] == '?' && i < n - 1) {
                    t = true;
                    tmp = ' ';
                }
            }
            else {
                if (tmp == 'a'){
                    if(s[i] != 'b' && s[i] != '?'){
                        cout << "NO" << endl;
                        return;
                    }
                }
                else if (tmp == 'b'){
                    if (s[i] != 'a' && s[i] != '?') {
                        cout << "NO" << endl;
                        return;
                    }
                }
                else if (i && tmp == ' ' && s[i] == '?' && t){
                    continue;
                }
            }
        }
        cout << "YES" << endl;
        return;
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