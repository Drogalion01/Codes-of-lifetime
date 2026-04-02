#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool isOne = false, isZero = false, bob=true;
    int cnt = 0, one = count(s.begin(), s.end(), '1'), zero = count (s.begin(), s.end(), '0');
    if(zero == n || one == n) {
        cout << "Bob" << endl;
        // cout << "-1" << endl;
        return;
    } 
    for(int j = 0; j < n; j++){
        if(s[j] == '1'){
            if(isOne && isZero) {
                cnt++;
                isZero = false;
            }
            else isOne = true;
            // cout << "1" << endl;
        } 
        else if(s[j]== '0' && isOne) {
            bob = false, isZero = true;
            // cout << "2" << endl;
        }
    }
    if(s[n-1] == '0') cnt++; 
    if(cnt%2==0 || bob) cout << "Bob" << endl;
    else {
        int c1 = 0, j;
        vector <int> id;
        isOne = false, isZero=false;
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                if(isOne && isZero) {
                    break;
                }
                else isOne = true;
            }
            else if(s[i]== '0' && isOne) isZero = true;
            
            if(isOne) c1++, id.push_back(i+1);
        }
        cout << "Alice\n" << c1 << endl;
        for(auto x : id) {
            cout << x << " ";
        }
        cout << endl;
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