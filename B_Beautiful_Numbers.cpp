#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    int sum = 0;
    for(auto& x : s) {
        sum += x;
    }
    if(sum <= 9) {
        cout << 0 << endl;
        return;
    }
    else {
        sum = 0;
        int c1 = 0, c2 = 0;
        char tmp = s[0];
        s.erase(0, 1);
        sort (s.begin(), s.end());
        s.insert(0, 1, tmp);

        for(int i = 0; i < s.size(); i++){
            sum += s[i] - '0';
            if(sum <= 9) c1++;
            else break;
        }

        sum = 0;
        if(s[0] != '1') {
            s[0] = '1';
            c2--;
        }
        for(int i = 0; i < s.size(); i++){
            sum += s[i] - '0';
            if(sum <= 9) c2++;
            else break;
        }
        cout << s.size() - max (c1, c2) << endl;
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