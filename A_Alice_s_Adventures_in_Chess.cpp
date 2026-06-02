#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int x = 0, y = 0;
    vector<pair<int, int>> coo(n);
    int c = 0;
    while (c<21) {
        c++;
        for(int i = 0; i < n; i++){
            if(s[i] == 'N') y++;
            if(s[i] == 'S') y--;
            if(s[i] == 'E') x++;
            if(s[i] == 'W') x--;
            // coo[i].first = x;
            // coo[i].second = y;
            if(x == a && y == b) {
                cout << "YES" << endl;
                return;
            }
        }
        if(x == 0 && y == 0) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "NO" << endl;
    // if(x == y && x == 0) {
    //     cout << "NO" << endl;
    //     return;
    // }
    // for(int i = 0; i < n; i++){
    //     int xx = coo[i].first, yy = coo[i].second;
    //     if(xx && yy && a%xx == 0 && b%yy == 0 && abs(a/xx) == abs(b/yy)) {
    //         cout << "YES" << endl;
    //         return;
    //     }
    // }
    // cout << "NO" << endl;
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