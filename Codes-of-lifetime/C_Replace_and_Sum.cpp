#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<int> b(n);
    for(auto& x : a) cin >> x;
    for(auto& x : b) cin >> x;

    vector<int>mx(n);
    for(int i = 0; i < n; i++){
        if(i==n-1 && a[i] < b[i]) mx[i]=b[i];
        else if(i==n-1 && a[i] >= b[i]) mx[i] = a[i];
        if(i<n-1){
            if(a[i+1] > b[i] && a[i]< a[i+1]) mx[i] = a[i+1];
            else if(a[i+1] < b[i] && a[i]< b[i]) mx[i] = b[i];
            else mx[i] = a[i];
        }
    }

    for(int i = n-1; i > 0; i--){
        mx[i-1] = max(mx[i], mx[i-1]);        
    }

    vector <long long> pref(n+1, 0);
    
    for(int i = 0; i < n; i++){
        pref[i+1] = pref[i] + mx[i];
    }

    // for(int i = 0; i < n+1; i++){
    //     cout << pref[i] << " ";
    // }
    // cout << endl;

    int b1, b2;
    for(int i = 0; i < q; i++){
        cin >> b1 >> b2;
        long long s = 0;
        s = pref[b2] - pref[b1-1];
        cout << s << " ";
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