#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_case;
    cin >> test_case;
    while(test_case--){
        int n;
        cin >> n;
        vector <int> a(n);
        for(auto& x : a) cin >> x;
        sort(a.begin(), a.end());
        cout << a[n-1] << endl;
    }
    return 0;
}