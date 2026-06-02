#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int one = count(s.begin(), s.end(), '1');
    if(one == n) {
        cout << one << endl;
        return;
    }

    vector<pair<int,int>>zero;
    
    bool z = false;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(s[i]=='0') {
            cnt++;
            if(i==0) z = true;
        }
        else {
            if(z) zero.push_back({cnt, 1});
            else zero.push_back({cnt, 0});
            cnt = 0;
            z = false;
        }
    }
    zero.push_back({cnt, 1});

    if(n==count(s.begin(), s.end(), '0')) {
        cout << (n+2)/3 << endl;
        return;
    }

    for(int i = 0; i < zero.size(); i++){
        if(zero[i].second == 1 && (zero[i].first+3)/3 == (zero[i].first+1)/3) {
            one += (int)(zero[i].first/3) + 1;
        }
        else {
            one += (int)(zero[i].first/3);
        }
    }
    cout << one << endl;
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