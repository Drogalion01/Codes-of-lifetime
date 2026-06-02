#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, m;
    cin >> n >> m;
    int cnt = 0, side = 0, tmp = 0;
    
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        if ((a%2==0 && b != side) || (a%2 && b==side)) m--;
        if(a%2) side = !b;
        else side = b;
    }
    cout << m << endl;
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