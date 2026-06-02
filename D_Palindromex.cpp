#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int mex(vector<int>& arr, int l, int r) {
    map<int, int> cnt;
    for(int i = l; i <= r; i++) {
        cnt[arr[i]]++;
    }
    int mex = 0;
    while(cnt[mex] > 0) mex++;
    return mex;
}

void solve(){
    ll n;
    cin >> n;
    vector<int> a(2*n);
    for(auto& x : a) cin >> x;
    vector<pair<int, int>> idx(2*n);
    for(int i = 0; i < 2*n; i++){
        idx[i].first = a[i];
        idx[i].second = i;
    }
    sort (idx.begin(), idx.end());

    int i1 = idx[0].second, i2 = idx[1].second;
    int mx = 1;
    bool pal = false;
    for(int i = i1; i <= i1 + (i2-i1)/2; i++) {
        if(a[i] == a[i2-(i-i1)]) pal = true;
        else{
            pal = false;
            break;
        }
    }
    int c = 0;
    if(pal || i2-i1 == 1) {
        int t1 = i1, t2 = i2;

        while (t1 >= 0 && t2 < 2*n) {
            if(a[t1] != a[t2]) {
                mx = max(mx, mex(a, t1+1, t2-1));
                c++;
                break;
            }
            t1--;
            t2++;
        }
        if(!c) mx =  max (mex(a, t1+1, t2-1), mx);
    }
    
    int l = i1, r = i1;
    c = 0; 
    while(l >= 0 && r < 2*n) {
        if(a[l] != a[r]) {
            mx =  max (mex(a, l+1, r-1), mx);
            c++;
            break;
        }
        l--;
        r++; 
    }
    if(!c)mx =  max (mex(a, l+1, r-1), mx);
    
    l = i2, r = i2, c=0;
    while(l >= 0 && r < 2*n) {
        if(a[l] != a[r]) {
            mx =  max (mex(a, l+1, r-1), mx);
            c++;
            break;
        }
        l--;
        r++;
    }
    if(!c) mx =  max (mex(a, l+1, r-1), mx);
    cout << mx << endl;
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