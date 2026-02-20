#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, a;
    cin >> n >> a;
    vector <long long> v(n);
    for(auto& x : v) cin >> x;
    long long g = 0, l = 0;
    for(int i = 0; i < n; i++){
        if(v[i] < a) l++;
        else if (v[i] > a) g++;
    }
    if(g >= l) cout << a+1 << endl;
    else cout << a-1 << endl;
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