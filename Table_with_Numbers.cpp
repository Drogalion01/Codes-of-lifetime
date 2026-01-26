#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_case;
    cin >> test_case;
    while(test_case--){
        int n, h, l;
        cin >> n >> h >> l;
        vector <int> a(n);
        for(auto& x : a) cin >> x;
        vector<vector<int>> t(h, vector<int>(l, 0));
        for(int i = 0; i < n-1; i++){
            if(a[i] <= h && a[i+1] <= l){
                t[a[i]-1][a[i+1]-1] = 1;
            }
        }
        int s = 0;
        for(int i = 0; i < h; i++){
            for(int j = 0; j < l; j++){
                s += t[i][j];
            }
        }
        cout << s << endl;
    }
    return 0;
}