#include<bits/stdc++.h>
using namespace std;
int isNonD (vector<int>a, int n) {
    int c = 0;
    for(int i = 0; i < n-1; i++){
        if(a[i] <= a[i+1]) c++;
    }
    if (c == n-1) return 1;
    else return 0;
}
void solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(auto& x : a) cin >> x;
    if (n == 1) {
        cout << 1 << endl;
        return;
    }
    if(isNonD(a, a.size())) cout << a.size() << endl;
    else {
        cout << 1 << endl;
    }
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