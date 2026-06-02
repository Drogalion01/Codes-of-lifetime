#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    map<int, char> idx;
    int fir = 0, sec = n-1;
    for(int i = 0; i < k; i++){
        if(s[i] == '0') {
            idx[fir] = '-';
            fir++;
        }
        else if(s[i] == '1') {
            idx[sec] = '-';
            sec--;
        }
        else {
            idx[fir] = '?';
            idx[sec] = '?';
            fir++;
            sec--;
        }
    }  
    if(n==1) cout << '-';
    else if(s.size() == n) {
        for(int i = 0; i < n; i++) cout << '-' ;
    } 
    else {
        for(int i = 0; i < n; i++){
            if(idx.count(i)) {
                cout << idx[i];
            }
            else cout << '+';
        }
    }
    cout << endl;
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