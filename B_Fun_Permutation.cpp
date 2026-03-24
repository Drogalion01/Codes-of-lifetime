#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector <int> a(n);
    for(auto& x : a) cin >> x;
    vector<int>tmp(n);
    for(int i = 0; i < n; i++){
        tmp[i] = i+1;
    }
    vector<int>r(n);
    for(int i = 0; i < n; i++){
        int j = 0;
        if(i==0) {
            do {
                j++;
            }while(tmp[j] && (a[i]+tmp[j]) < 3 && ((a[i]+tmp[j])%3) && ((a[i]+tmp[j])%2) && j < tmp.size());
            r[i] = tmp[j];
            tmp.erase(tmp.begin()+j);
        }

        else {
            do{
                j++;
            } while(a[i]+tmp[j] < 3 && (gcd(a[i]+tmp[j], a[i-1])) < 3 && tmp.size() > j);
            r[i] = tmp[j];
            tmp.erase(tmp.begin()+j);
        }
    }
    for(auto& x : r) cout << x << " ";
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