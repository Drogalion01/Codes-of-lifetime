#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    for(int i = 0; i <= n/2; i++){
        cout << i+1 << " " ;
        if(n%2 || i < n/2)
        cout << n-i;
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