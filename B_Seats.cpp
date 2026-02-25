#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    char tmp = ' ';
    string tz(n, ' '), to(n, ' ');
    int c1 = 0, c0 = 1, c00 = 2;
    for(int i = 0; i < n; i++){
        if(i == c1) {
            to[i] = '1';
            tz[i] = '0';
            c1+=3;
        }
        else if (i == c0) {
            to[i] = '0';
            tz[i] = '1';
            c0+=3;
        }
        else if (i == c00) {
            to[i] = '0';
            tz[i] = '0';
            c00+=3;
        }

        if(s[i] == '1') {
            tz[i] = '1';
            to[i] = '1';
        }
    }

    for(int i = 0; i < n; i++){
        
        cout <<"to: " << to[i] << " tz: " << tz[i] << " ";
    }
    cout << endl;
    // cout << count(s.begin(), s.end(), '1') << endl;
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