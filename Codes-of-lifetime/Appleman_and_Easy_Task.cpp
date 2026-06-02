#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    char a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    vector <int> c(n*n, 0);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i-1 >= 0 && a[i-1][j] == 'o') c[i*n+j]++;
            if(i+1 < n && a[i+1][j] == 'o') c[i*n+j]++;
            if(j-1 >= 0 && a[i][j-1] == 'o') c[i*n+j]++;
            if(j+1 < n && a[i][j+1] == 'o') c[i*n+j]++;
        }
    }
    bool p = false;
    for(int i = 0; i < n*n; i++){
        if(c[i]%2!=0){
            cout << "NO" << endl;
            p = true;
            break;
        }
    }
    if(p == false) cout << "YES" << endl;
    return 0;
}