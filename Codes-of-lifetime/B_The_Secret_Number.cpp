#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long cnt =  0;
    vector <long long> a;

    for(int i = 1; i <= 18; i++){
        long long tmp = pow(10,i), x = n/(tmp+1);
        
        if(n % (tmp+1) == 0 && n == x + x*tmp) {
            cnt++;
            a.push_back(x);
        }
    }
    cout << cnt << endl;
    if(cnt) {
        sort (a.begin(), a.end());
        for(int i = 0; i < a.size(); i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
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