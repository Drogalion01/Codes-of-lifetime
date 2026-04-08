#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin >> n >> k;
    vector<int>a(n);
    for(auto& x : a) cin >> x;
    int cnt = 1, t = 0;
    for(int i = 0; i < n; i++){
        if(!i) t = a[i];
        else if(a[i] == t) cnt++;
    }

    if((k%2 && n%2==0) || (k%2==0 && n%2)) {
        cout << "YES" << endl;
        return;
    }
    else {
        cout << "NO" << endl;
        return;
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