#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long s = 0, tmp;
    while(n>=3){
        s+=n/3;
        tmp = n;
        n /= 3;
        n+=tmp%3;
    }
    cout << s << endl;
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