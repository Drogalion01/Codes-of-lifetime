#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    int dx = 0, dy = 0;
    for(char c : s){
        if(c == 'N') dy++;
        if(c == 'S') dy--;
        if(c == 'E') dx++;
        if(c == 'W') dx--;
    }

    int x = 0, y = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'N') y++;
        if(s[i] == 'S') y--;
        if(s[i] == 'E') x++;
        if(s[i] == 'W') x--;
    }
    cout << "NO" << endl;
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