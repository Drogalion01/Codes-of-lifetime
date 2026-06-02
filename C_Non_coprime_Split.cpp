#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int isnt_prime(long long n) {
    if(n%2==0 || n==1) return 2;
    else{
        for(int i = 3; i*i <= n; i+=2){
            if(n%i == 0) return n/i; 
        }
        return 0;
    }
}
void solve(){
    ll a, b;
    cin >> a >> b;
    if(a==b) { 
        if(isnt_prime(a) && a >= 4) {
            cout << isnt_prime(a) << " " << a-isnt_prime(a) << endl;
            return;
        }
        if(!isnt_prime(a)) {
            cout << "-1" << endl;
            return;
        }
    }
    if(b >= 4){
        cout << b/2 << " " << b/2 << endl;
        return;
    }
    cout << "-1" << endl;
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