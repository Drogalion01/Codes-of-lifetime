#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long x;
    cin >> x;
    for(int i = 0; i < 82; i++){
        long long y = x + i, d = 0;
        while(y){
            d = y%10;
            y/=10;
        }
        if(d == i) {
            cout << "10" << endl;
            return;
        }
    }
    cout << "0" << endl;
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