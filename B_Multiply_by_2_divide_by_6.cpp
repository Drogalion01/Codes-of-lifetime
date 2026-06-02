#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    if(n==1) {
        cout << "0" << endl;
        return;
    }
    long long cnt = 0, rem = n;
    while(rem > 1) {
        if(rem%6 == 0) {
            cnt++;
            rem /= 6;
        }
        else if(rem%3==0) {
            cnt+=2;
            rem/=3;
            }
        else {
            cout << "-1" << endl;
            return;
        }
    }
    cout << cnt << endl;
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