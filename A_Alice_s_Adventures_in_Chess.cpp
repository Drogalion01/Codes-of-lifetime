#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    // Displacement per cycle
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
        
        long long diff_x = a - x;
        long long diff_y = b - y;
        long long k = -1;
        bool possible = true;

        if (dx == 0) {
            if (diff_x != 0) possible = false;
        } else {
            if (diff_x % dx != 0) possible = false;
            else {
                k = diff_x / dx;
                if (k < 0) possible = false;
            }
        }

        if (possible) {
            if (dy == 0) {
                if (diff_y != 0) possible = false;
            } else {
                if (diff_y % dy != 0) possible = false;
                else {
                    long long k_y = diff_y / dy;
                    if (k_y < 0) possible = false;
                    else {
                        if (k != -1 && k != k_y) possible = false;
                    }
                }
            }
        }

        if (possible) {
            cout << "YES" << endl;
            return;
        }
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