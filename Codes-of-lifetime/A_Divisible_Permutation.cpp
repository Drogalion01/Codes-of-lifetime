#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    if(n%2) cout <<n/2+1 << " ";
    for(int i = n/2; i > 0; i--){
        cout << n-i+1 << " " << i << " ";     
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