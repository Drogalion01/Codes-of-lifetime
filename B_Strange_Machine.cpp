#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, q;
    cin >> n >> q ;
    string s;
    cin >> s;
    for(int i = 0; i < q; i++){
        long long a, k = 0, cnt = 0;
        cin >> a;
        while(1) {
            cnt++;
            if(s[k] == 'A'){
                a-=1;
            }
            else if(s[k] == 'B') {
                a/=2;
            }
            if(a<=0) break;
            k++;
            if(k == n) k = 0;
        }
        cout << cnt << endl;
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