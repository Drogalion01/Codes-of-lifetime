#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long a, b, n;
    cin >> a >> b >> n;
    long long c = 1, tmp = a/n, in = n;
    if(a/n < b) c++;
    if(a <= b) c = 1;
    cout << c << endl;
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