#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long k = 1;
    long long tmp = n;
    for(int i = 2; i * i <= n; i++){
        if(tmp % i==0) k*=i;
        while (tmp % i == 0) tmp/=i;
    }

    if(tmp > 1) k*=tmp;
    cout << k << endl;

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