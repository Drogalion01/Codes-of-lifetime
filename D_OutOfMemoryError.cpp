#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, m, h;
    cin >> n >> m >> h;
    vector<long long> a(n);
    vector<long long> sec;
    for(auto& x : a) cin >> x;
    sec = a;
    long long b[m][2], temp[n][2];
    for(int i = 0; i < n; i++){
        temp[i][0] = temp[i][1]= 0;
    }
    for(int i = 0; i < m; i++){
        cin >> b[i][0] >> b[i][1];
    }
    // for(int i = 0; i < m; i++){
    //     temp[b[i][0]][0]+=b[i][1];
    //     temp[i][1] = b[i][0]-1;
    // }
    for(int i = 0; i < m; i++){
        if(sec[b[i][0]-1] + b[i][1] > h) sec = a;
        else if(sec[b[i][0]-1] + b[i][1] <= h) sec[b[i][0]-1] += b[i][1];
        if(sec[b[i][0]-1] > h) {
            sec = a;
        }
        // cout << "t1: " ;
        // for(int j = 0; j < n; j++){
        //     cout << sec[j] << " ";
        // }
        // cout << endl;
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