#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_case;
    cin >> test_case;
    while(test_case--){
        int n, s, x;
        cin >> n >> s >> x;
        vector <int> a(n);
        for(auto& x : a) cin >> x;
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += a[i];
        }
        int temp = s-sum;
        if(temp < 0) cout << "NO" << endl;
        else if(temp % x == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}