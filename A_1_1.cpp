#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool z = false, o = false;
    int cnt = 0;
    vector<int> t;
    for(int i = 1; i < n-1; i++){
        if(s[i-1] == '1' && s[i+1] == '1') s[i] = '1';
    }
    for(int i = 0; i < n; i++){
        if(s[i] == '1') cnt++, o = true;
        else if(o) {
            t.push_back(cnt);
            cnt = 0;
            o = false;
        }
    }
    t.push_back(cnt);

    cnt = 0;
    for(int i = 0; i < t.size(); i++){
        if(t[i]>2) cnt += (t[i]+2)/2;
        else cnt+= t[i];
    }
    cout << cnt << " " << count(s.begin(), s.end(), '1') << endl;
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