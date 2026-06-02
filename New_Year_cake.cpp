#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_case;
    cin >> test_case;
    while(test_case--){
        long a, b;
        cin >> a >> b;
        if (a > b) swap (a, b);
        if(a==1) {
            int t=1;
            cout << t+(int)(a!=b) << endl;
        }
        else {
            long ae, ao, be, bo;
            ae = (long)max((long)(log2(a+1)-1), 1L)/2;
            ao = (long)max((long)(log2(a+1)-2), 1L)/2;
            be = (long)max((long)(log2(b+1)-1), 1L)/2;
            bo = (long)max((long)(log2(b+1)-2), 1L)/2;
            long t1 = ae*2, t2 = ao*2 + (int)(ao!=be);
            cout << max (t1, t2) << endl;
        }
    }
    return 0;
}