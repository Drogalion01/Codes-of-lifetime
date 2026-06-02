#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int a, b;
    cin >> a >> b;
    int tmp = a + 2 * b;

    for(int i = 1; i <= 10e5; i++){
        int den = 2 * i + 1;
        int num = tmp - i;

        if(num <= 0) break;
        if(num % den != 0) continue;

        int j = num / den;  
        if(j < 1) continue;

        if(abs(i - j) <= a){
            cout << i << " " << j << endl;
            return;
        }
    }
    cout << "-1" << endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_case;
    cin >> test_case;
    while(test_case--){
        solve();
    }
    return 0;
}