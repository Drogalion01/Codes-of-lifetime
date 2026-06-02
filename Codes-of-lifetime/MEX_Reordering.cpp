#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_case;
    cin >> test_case;
    while(test_case--){
        int n, one = 0, zero = 0;
        cin >> n;
        vector <int> a(n);
        vector <int> temp(n+1, 0);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            temp[a[i]]++;
            if(a[i] == 0) zero++;
            else if (a[i] == 1) one++;
        }
        int mex;
        for(int i = 0; i < n+1; i++){
            if(temp[i] == 0){
                mex = i;
                break;
            }
        }
        //cout << "MEX: " << mex << endl;
        if(mex == 0) cout << "NO" << endl;
        else if (mex == 1 && zero == 1) cout << "YES" << endl;
        else if (mex == 1 && zero >= 2) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}