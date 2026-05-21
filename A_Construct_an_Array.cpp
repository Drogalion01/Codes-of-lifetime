#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    cin >> n;
    for(int i = 1; i <= 2*n; i++){
        if(i%2) cout << i << " ";
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