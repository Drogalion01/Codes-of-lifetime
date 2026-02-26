#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, h, k;
    cin >> n >> h >> k;
    vector <long long> a(n);
    vector <pair<long long, int>> tmp(n);
    for(auto& x : a) cin >> x;
    
    for(int i = n-1; i >= 0; i--){
        tmp[i].first = a[i];
        tmp[i].second = i;
    }
    
    sort (tmp.begin(), tmp.end());

    long long sum = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i];
    }
    
    auto itn = min_element (a.begin(), a.end());
    auto itx = max_element (a.begin(), a.end());

    long long c = h/sum;
    long long r = c*n + c*k;
    if (h%sum == 0) {
        cout << r - k << endl;
    } 
    else {
        int idn = -1, idx = - 1;
        for(int i = n-1; i >= 0; i--){
            if(tmp[i].first > *itn && tmp[i].second > itn-a.begin()) {
                idx = tmp[i].second;
                break;
            }
        }
        for(int i = 0; i < n; i++){
            if (tmp[i].first < *itx && tmp[i].second < itx-a.begin()) {
                idn = tmp[i].second;
                break;
            }
        }
        if (idx != -1 && idn != -1 && idx > idn) {
            swap (a[idx], a[idn]);
            // cout << "t1" << endl;
        }
        else if (idx != -1 && idn == -1) {
            swap (a[itn-a.begin()], a[idx]);
            // cout << "t2" << endl;
        }
        else if (idx == -1 && idn != -1) {
            swap (a[itx-a.begin()], a[idn]);
            // cout << "t3" << endl;
        }

        // for(auto& x : a) cout << x << " ";
        // cout << endl;
        vector<long long> pref(n+1, 0);
        for(int i = 0; i < n; i++) {
            pref[i+1] = pref[i] + a[i];
        }
        // for(auto& x : pref) cout << x << " ";
        // cout << endl;
        long long rem = h - c*pref[n];
        for(int i = 1; i < n+1; i++){
            r++;
            if(rem <= pref[i]) break;
        }
        cout << r << endl;
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