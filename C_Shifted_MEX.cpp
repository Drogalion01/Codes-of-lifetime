#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector <long long> a(n);
    for(auto& x : a) cin >> x;
    if(n==1) cout << "1" << endl;
    else {
        sort(a.begin(), a.end());
        int c = 0, temp = 0;
        for(int i = 0; i < n - 1; i++){
            if(abs(a[i+1] - a[i]) == 1) {
                c++;
            }
            else if(c!=0 && abs(a[i+1] - a[i]) > 1){
                temp = max(temp, c);
                c = 0;
            }
        }
    cout << max(temp, c) + 1 << endl;
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