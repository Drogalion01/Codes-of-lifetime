#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int ev = 0, tmp;
    for(auto& x : a) {
        cin >> x;
    }
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if((a[j] % a[i])%2 == 0) {
                cout << a[i] << " " << a[j] << endl;
                return;
            }
        }
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