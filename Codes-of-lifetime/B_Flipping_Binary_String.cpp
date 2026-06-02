#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int z = 0, o = 0;
    // vector<int> a(n);
    // for(int i = 0; i < n; i++){
    //     if(s[i] == '0') a[i] = 0;
    //     else a[i] = 1;
    // }
    for(int i = 0; i < n; i++){
        if(s[i] == '0') z++;
        else o++;
    }
    
    if(o == 0) cout << "0" << endl;
    else if(o%2 == 0){
        if(z == 1){
            cout << "1" << endl;
            for(int i = 0; i < n; i++){
                if(s[i] == '0') cout << i+1 << endl;
            }
        }
        else {
            cout << o << endl;
        for(int i = 0; i < n; i++){
            if(s[i]=='1'){
                cout << i+1 << " ";
            }
        }
        cout << endl;}
    }
    else if(z%2){
        cout << z << endl;
        for(int i = 0; i < n; i++){
            if(s[i] == '0') cout << i+1 << " ";
        }
        cout << endl;
    }
    else cout << "-1" << endl;
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