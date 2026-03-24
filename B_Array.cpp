#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector <long long> a(n);
    for(auto& x : a) cin >> x;
    int c1=0, c2=0;
    for(int i = 0; i < n-1; i++){
        c1 = 0, c2 = 0;
        for(int j = i+1; j < n; j++){
            if(a[i] > a[j]) c1++;
            else if(a[i] < a[j]) c2++;
        }
        cout << max(c1,c2) << " ";
    }
    cout << "0" << endl;
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