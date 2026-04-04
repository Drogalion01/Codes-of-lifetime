#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long w, h, d, n;
    cin >> w >> h >> d >> n;
    int t1 = 0, t2 = 0, t3 = 0;
    t1 = gcd(w,n);
    t2 = gcd(n/t1, h);
    if(n%(t1*t2)==0)
        t3 = gcd(n/(t1*t2), d);
    if(t3 && n%(t1*t2*t3)==0 && n/(t1*t2*t3) == 1) cout << t1-1 << " " << t2-1 << " " << t3-1 << endl;
    else cout << "-1" << endl;
}