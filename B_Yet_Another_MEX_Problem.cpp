#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    vector <int> t(n+1, 0);
    for(auto& x : a) {
        cin >> x;
        t[x]++;
    }
    int mex; 
    for(int i = 0; i < n; i++){
        if(t[i]==0) {
            mex = i;
            break;
        }
    }
    cout << min (mex, k-1) << endl;    
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