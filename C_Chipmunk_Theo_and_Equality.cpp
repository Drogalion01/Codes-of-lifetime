#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    cin >> n;
    vector<ll>a(n);
    for(auto& x : a) cin >> x;
    sort(a.begin(), a.end());
    ll mn = *min_element(a.begin(), a.end()), c1 = 0, c2 = 0;
    if(count(a.begin(), a.end(), mn) == n) {
        cout << 0 << endl;
        return;
    }

    for(int i = 0; i < n; i++){
        if(a[i] > mn) {
            ll tmp = a[i];
            while(tmp > mn) {
                if(tmp%2) c1++;
                tmp = (tmp+1)/2;
                c1++;
                if(tmp + 1 == mn) {
                    c1++;
                    break;
                }
            }
        }
        if(a[i]%2) {
            a[i]++;
            c2++;
        }
    }
    
    mn = *min_element(a.begin(), a.end());
    for(int i = 0; i < n; i++){
        if(a[i] > mn) {
            ll tmp = a[i];
            while(tmp > mn) {
                if(tmp%2) c2++;
                tmp = (tmp+1)/2;
                c2++;
                if(tmp + 1 == mn) {
                    c2++;
                    break;
                }
            }
        }
        // cout << "c2: " << c2 << endl;
    }
    cout << min(c1, c2) << endl;
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