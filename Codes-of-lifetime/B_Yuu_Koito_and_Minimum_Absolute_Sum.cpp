#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector <int> a(n);
    for(auto& x : a) cin >> x;
    if(a[0]!=a[n-1]){
        if(a[0] == -1) a[0] = a[n-1];
        else if(a[n-1] == -1) a[n-1] = a[0];        
    }

    for(int i = 0; i < n; i++){
        if(a[i] == -1) a[i] = 0;
    }
    cout << abs(a[0]-a[n-1]) << endl;
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
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