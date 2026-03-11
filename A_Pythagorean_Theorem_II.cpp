#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, cnt = 0;
    cin >> n;
    for(long long j = n; j >= 5; j--){
        for(long long i = 3; i*i <= ((j*j)+1)/2; i++){
            long long sq = j*j - i*i;
            int tmp = (int) sqrt(sq);
            if(tmp*tmp == sq) {
                cnt++;
            }
            // cout << sq << " " << tmp << endl;
        }
    } 
    cout << cnt << endl;
    return 0;
}