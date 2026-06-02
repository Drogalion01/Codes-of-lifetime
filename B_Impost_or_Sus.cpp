#include<bits/stdc++.h>
using namespace std;
void solve(){
    string r;
    cin >> r;
    int s = 0, u = 0;
    vector<int> idx;
    int t = 0;
    bool op = false;
    for(int i = 0; i < r.length(); i++){
        if(r[i] == 's') {
            s++;
            op = false;
        }
        else {
            u++;
            if(i == r.length()-1 || i == 0) t++;
            else if(op == true) {
                t++;
                op = false;
            }
            else if(op == false) op = true;     
        }
    }
    if(s == r.length()) cout << "0" << endl;
    else {
        cout << t << endl;
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