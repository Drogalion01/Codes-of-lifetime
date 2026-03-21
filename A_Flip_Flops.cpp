#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, c, k;
    cin >> n >> c >> k;
    vector<long long>a(n);
    for(auto& x : a) cin >> x;
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++){
        if(a[i] <= c) {
            long long tmp = c-a[i];
            c+=min(k+a[i], c);
            k-=min(k, tmp);   
        }
        else break;
    }
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