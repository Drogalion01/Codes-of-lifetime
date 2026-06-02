#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& x : a) cin >> x;
    map <int, int> tmp;
    for(int i = 0; i < n; i++){
        tmp[a[i]]++;
    }
    int cnt = 0, point = 0;
    for(auto i = tmp.begin(); i != tmp.end(); i++){
        if(i->second > 1) point++;
        else if(i->second == 1) cnt++;
    }
    if(cnt > 0) point+= 2*((cnt+1)/2);
    cout << point << endl;
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