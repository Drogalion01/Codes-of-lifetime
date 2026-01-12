#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_case;
    cin >> test_case;
    while(test_case--){
        long long s, k, m;
        cin >> s >> k >> m;
        if (k > m) cout << max(s-m, 0LL) << endl;
        else if(k == m) cout << min (s, k) << endl;
        else{
            if((long long)(m/k) % 2 == 0) cout << max (s - (long long) m % k, 0LL) << endl;
            else if ((long long)(m/k) % 2 != 0) cout << max (min(s,k) - (long long) m % k, 0LL) << endl;
        }
    }
}