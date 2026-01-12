#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_case;
    cin >> test_case;
    while(test_case--){
        long long n, k;
        cin >> n >> k;
        if(k > n) cout << "-1" << endl;
        else if (k == n) cout << "0" << endl;
        else{
            long long temp = n, t = 0, tr = 0;

            while (temp > 1)
            {
                long long fl = (long long) temp/2, cl = (long long) (temp+1)/2;
                //cout << "fl " << fl << " " << "cl " << cl << " " << t+1 << endl;
                if (cl < k){
                    cout << "-1" << endl;
                    tr++;
                    break;
                }
                else if (fl == k || cl == k) {
                    cout << t + 1 << endl;
                    tr++;
                    break;
                }
                else if (fl % 2 != 0){
                    temp = fl;
                    t++;
                }
                else{
                    temp = cl;
                    t++;
                }
            }
            if (tr == 0) cout << "-1" << endl;
        }
    }
}