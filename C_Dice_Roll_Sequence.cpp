#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(auto& x : a) cin >> x;
    vector<int> adj(n-1);
    for(int i = 0; i < n-1; i++){
        adj[i] = a[i]+a[i+1];
    }
    int c = 0;
    for(int i = 0; i < n-1; i++){
        if(adj[i] == 7 || a[i] == a[i+1]) c++;
        if(adj[i] == 7 && a[i] == a[i+1]) c--;
        if(i && adj[i] == adj[i-1] == 7) c--;
    }
    cout << c << endl;
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