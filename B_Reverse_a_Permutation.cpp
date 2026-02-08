#include<bits/stdc++.h>
using namespace std;
// int fi(int n, vector<int>& a, int temp){
//     for(int i = 0; i < n; i++){
//         if(a[i] == temp) return i;
//     }
// }
int reverse(vector<int>& s, int idx, int t){
    int j = idx, i = t;
    while(i < j){
        swap (s[i], s[j]);
        i++;
        j--;
    }
    return 0;
}
void solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    vector<int>trc(n);
    for(auto& x : a) cin >> x;
    for(int i = 0; i < n; i++){
        trc[a[i]-1] = i;
    }
    int temp = n, t = 0, idx;
    while (temp >= 0 && t < n)
    {
        idx = trc[temp-1];
        if(idx == t){
            temp--;
            t++;
            continue;
        }
        else
            break;
        //cout << "idx : " << idx << " t : " << t << endl;
    }
    reverse(a, idx, t);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
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