#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, m, h;
    cin >> n >> m >> h;
    vector<long long> a(n);
    vector<long long> sec;
    queue<long long> trc;
    for(auto& x : a) cin >> x;
    sec = a;
    long long b[m][2];
    bool res = false;
    
    for(int i = 0; i < m; i++){
        cin >> b[i][0] >> b[i][1];
    }

    for(int i = 0; i < m; i++){
        trc.push(i);
        sec[b[i][0]-1] += b[i][1];
        if(sec[b[i][0]-1] > h) res = true;
        if(res){
            while(!trc.empty()){
                int temp = trc.front();
                trc.pop();
                sec[b[temp][0]-1] = a[b[temp][0]-1];
            }
            res = false;
        }
    }

    for(int i = 0; i < n; i++){
        cout << sec[i] << " ";
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