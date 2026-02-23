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
    z -= z%2;
    o -= o%2;
    if(o < z) swap(o, z);
    if(k==0){
        if(z == o) {
            cout << "YES" << endl;
            return;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    
    if(2*k <= o) {
        int i = 0, t0 = z, t1;
        while (t0 >= 0) {
            t1 = o - 2*k + 2*i;
            t0 = z - (2*i);
            if (t1 == t0) {
                cout << "YES" << endl;
                return;
            }
            i++;
        }
        cout << "NO" << endl;
        return;
    }
    else {
        int i = 0, t0 = z, t1, tk = k;

        while (t0 >= 0){
            t1 = 2*i;
            tk = 2*k - o + t1;
            t0 = z - tk;
            if(t1 == t0) {
                cout << "YES" << endl;
                return;
            }
            i++;
        }
        cout << "NO" << endl;
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