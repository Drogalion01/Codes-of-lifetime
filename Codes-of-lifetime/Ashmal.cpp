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
        vector <string> a(n);
        for(auto& x : a) cin >> x;
        string s;
        for(int i = 0; i < n; i++){
            s = min (s+a[i], a[i]+s);
        }
        cout << s << endl;
    }
    return 0;
}