#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, n;
    cin >> a >> b >> n;
    int taxi[n][3];
    double time, mn = 10e9;
    for(int i = 0; i < n; i++) {
        cin >> taxi[i][0] >> taxi[i][1] >> taxi[i][2];
        time = (double)sqrt((a-taxi[i][0])*(a-taxi[i][0]) + (b-taxi[i][1])*(b-taxi[i][1]));
        if (time != 0) time /= taxi[i][2];
        if(time < mn) mn = time;
        cout << fixed << setprecision(8) << mn << endl;
    }
    cout << fixed << setprecision(8) << mn << endl;
}