#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    int c1 = 0, c2 = 0;
    bool flag = true;
    for(int i = 0; i < n; i++){
        if(a[i] == '(') {
            if (a[i] == b[i]) {
                c1++;
                c2++;
            }
            else {
                if(c1 > c2) {
                    c1--;
                    c2++;
                }
                else {
                    c1++;
                    c2--;
                }
            }
        }
        else {
            if (a[i] == b[i]) {
                c1--;
                c2--;
            }
            else {
                if(c1 > c2) {
                    c1--;
                    c2++;
                }
                else {
                    c1++;
                    c2--;
                }
            }
        }
        if(c1 < 0 || c2 < 0) {
            flag = false;
            break;
        }
    }
    cout << (flag && c1==c2 && c1 == 0 ? "YES" : "NO") << endl;
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