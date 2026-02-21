#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, h, k;
    cin >> n >> h >> k;
    vector <long long> a(n);
    for(auto& x : a) cin >> x;
    auto it1 = max_element(a.begin(), a.end());
    auto it2 = min_element(a.begin(), a.end());
    long long mx = *it1, mn = *it2, idx, idn;
    
    for(int i = 0; i < n; i++){
        if(a[i] == *it1){
            a[i] = mn;
            idx = i;
            break;
        }
    }

    for(int i = 0; i < n; i++){
        if(a[i] == *it2 && i != idx){
            a[i] = mx;
            break;
        }
    }
    for(auto x : a) cout << x << " ";
    cout << endl;
    // vector<long long> pref(n+1, 0);
    // for(int i = 0; i < n; i++){
    //     pref[i+1] = pref[i] + a[i];
    // }
    // if(pref[n] < h && h % pref[n]){
    //     long long t = (h/pref[n])*(n+k);

    //     h %= pref[n];
    //     long long i = 1;
    //     while(h > 0 && i < n+1){
    //         h-=pref[i];
    //         i++;
    //         t++;
    //     }
    //     cout << t << endl;
    //     return;
    // }
    // if(h % pref[n] == 0){
    //     if(pref[n] == h) {
    //         cout << n << endl;
    //         return;
    //     }
    //     else {
    //         long long t = (h/pref[n])*(n+k) - k;
    //         cout << t << endl;
    //         return;
    //     }
    // }
    // if(h < pref[n]){
    //     long long t = 0, i = 1;
    //     while(h > 0 && i < n+1){
    //         h-=pref[i];
    //         i++;
    //         t++;
    //     }
    //     cout << t << endl;
    //     return;
    // }

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