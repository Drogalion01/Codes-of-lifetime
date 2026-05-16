#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    string s;
    cin >> s;
    int c = 0;
    vector <int> tmp;
    for(int i = 0; i + 1 < s.size(); i++){
        if(s[i] == s[i+1]) {
            c++;
            tmp.push_back(i+1);
        }
    }
    if (c > 2) {
        
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
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