#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_case;
    cin >> test_case;
    while(test_case--){
        int n, m=0, z=0;
        cin >> n;
        vector <int> a(n);
        for(auto& x : a) cin >> x;
        for(int i = 0; i < n; i++){
            if(a[i]==-1) m++;
            if(a[i]==0) z++;
        }
        cout << z+(m%2)*2 << endl;
    }
    return 0;
}