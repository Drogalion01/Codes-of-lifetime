#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& x : a) cin >> x;
    for(int i = 0; i < n; i++){
            int m = a[i], idx = i+1;

            while(m%2==0) m/=2;
            while(idx%2==0) idx/=2;
            if(m!=idx){
                cout << "NO" << endl;
                return;
            }
    }
    cout << "YES" << endl;
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