#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if(n==1) {
        cout << "NO" << endl;
        return;
    }
    else if(k == 0) { 
        int c = 0;
        for(int i = 0; i <= n/2; i++){
            if(s[i] < s[n-1-i]) {
                cout << "YES" << endl;
                return;
            }
            if (s[i] > s[n-1-i]) {
                cout << "NO" << endl;
                return;
            }
        }
        cout <<"NO"<< endl;
    }
    else {
        for(int i = 0; i < n-1; i++){
            if (s[i] != s[i+1]) {
                cout << "YES" << endl;
                return;
            }
        }
        cout << "NO" << endl;
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