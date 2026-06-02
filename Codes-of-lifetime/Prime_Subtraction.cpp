#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_case;
    cin >> test_case;
    while(test_case--){
        long long x, y, diff;
        cin >> x >> y;
        diff = x - y;
        if (diff == 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}