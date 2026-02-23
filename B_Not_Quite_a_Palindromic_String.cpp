#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int z = 0, o = 0;
    for(auto x : s) {
        if(x == '0') z++;
        else o++;
    }
    if(o < z) swap(o, z);
    int tmp = k/2;
    if(k <= o/2+z/2 && o - tmp*2 - (k%2)*2 == z-tmp*2) {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;

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