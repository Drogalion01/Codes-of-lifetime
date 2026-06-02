#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(auto& x : a) cin >> x;

    auto it = max_element(a.begin(), a.end());

    if(n==1) {
        for(auto& x : a) cout << x << " ";
        cout << endl;
        return;
    }
    else if (it - a.begin() != 0) {
        swap (a[0], a[it-a.begin()]);
    }
    
    for(auto& x : a) cout << x << " ";
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