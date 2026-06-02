#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector <int> a(n);
    for(auto& x : a) cin >> x;
    for(int i = 0; i < n; i++){
        cout << n+1-a[i] << " ";
    }    
    cout << endl;
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