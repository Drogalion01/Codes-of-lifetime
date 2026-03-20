#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, k, p, m;
    cin >> n >> k >> p >> m;
    vector<int> a(n);
    for(auto& x : a) cin >> x;
    vector<long long> tmp;

        long long turn = a[0]*p;
        for(int i = 1; i < p; i++){
            turn = min(turn, (long long)(a[i]*(p-i)));
        }
        int rem = m-turn;
        if(rem < 0) cout << "0" << endl;
        else {
            int cycle = 0;
            for(int i = 0; i < k; i++){
                cycle = max(cycle, rem / (a[i]*(n-i)));
            }
            cout << cycle+1 << endl;
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