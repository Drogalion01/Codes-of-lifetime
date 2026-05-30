#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    string s;
    cin >> s;
    map<int, int>st;
    for(int i = 0; i < s.size(); i++){
        st[s[i]-'0']++;
    }

    int c = 0;
    if(st.count(0) && (st.count(2) || st.count(6))) c = st[0];
    else if(st[0] > 1) c = st[0] - 1;
    
    c+=st[4]+st[8];
    int tmp = 0;
    for(int i = 1; i < 10; i+=2){
        if(st.count(i)) tmp+=st[i];
    }
    if(tmp) c+=min(tmp, (st[2]+st[6]));
    cout << c << endl;
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