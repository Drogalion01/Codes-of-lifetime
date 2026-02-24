#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, q;
    cin >> n >> q ;
    string s;
    cin >> s;
    vector<int>seq;
    int t = 0;
    for(int i = 0; i < s.size(); i++){
        if (s[i] == 'A') {
            t++;
        }
        else {
            if(t) {
                seq.push_back(t);
                t = 0;
            }
            seq.push_back(0);
        }
    }
    if(t) seq.push_back(t);

    // for(auto& x : seq) cout << x << " ";
    // cout << endl;

    for(int i = 0; i < q; i++){
        long long a, k = 0, cnt = 0;
        cin >> a;
        while(a>0) {
            if(count(s.begin(), s.end(), 'B') == 0) {
                cnt = a;
                break;
            }
            else if(seq[k] == 0){
                a/=2;
                cnt++;
            }
            else {
                a -= seq[k];
                if(a >= 0) cnt += seq[k];
                else cnt += seq[k] + a;
            }
            k++;
            if(k == seq.size()) k = 0;
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