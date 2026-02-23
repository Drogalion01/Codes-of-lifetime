#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, q;
    cin >> n >> q ;
    string s;
    cin >> s;
    for(int i = 0; i < q; i++){
        long long a, cnt = 0, tmp;
        cin >> a;
        tmp = a;
        for(int j = 0; j < n; j++){
            if(s[j] == 'A') tmp -= 1;
            else tmp /= 2;
            if(tmp <= 0) {
                cnt = j+1;
                break;
            }
        }
        if(cnt) {
            cout << cnt << endl;
            continue;
        }
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