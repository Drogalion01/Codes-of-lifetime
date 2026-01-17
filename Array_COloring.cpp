#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_case;
    cin >> test_case;;
    while(test_case--){
        int n;
        cin >> n;
        vector <int> a(n);
        for(auto& x : a) cin >> x;
        bool temp;
        int c = 0;
        if(a[0]%2 == 0) temp = true;
        else temp = false;
        for(int i = 1; i < n; i++){
            if(a[i]%2 == 0 && temp == false) temp = true;
            else if(a[i]%2 != 0 && temp == true) temp = false;
            else c++;
        }
        if(c == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}