#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string t = s;
    sort(t.begin(), t.end());
    int one = count(s.begin(), s.end(), '1'), zero = count (s.begin(), s.end(), '0');
    if(zero == n || one == n || t==s) {
        cout << "Bob" << endl;
        return;
    } 
    
    vector<int> ones, zeroes;

    for(int i = 0; i < n; i++){
        if(s[i] == '1') ones.push_back(i);
        else zeroes.push_back(i);
    }

    for(int i = ones.size()-1; i >=0; i--){
        int cnt = zeroes.end() - lower_bound(zeroes.begin(), zeroes.end(), ones[i]);
        
        if(i+1<= cnt) {
            cout << "Alice\n" << i + 1 + min(i+1, cnt) << endl;
            for(int j = 0; j <= i; j++){
                cout << ones[j]+1 << " ";
            }
            for(int j = max(0, (int)zeroes.size() - min(i+1,cnt)); j < zeroes.size(); j++){
                cout << zeroes[j]+1 << " ";
            }
            cout << endl; 
            return;
        } 
    } 
    cout << "Bob" << endl;
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