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
        if(a>b) swap(a,b);
        long t1 = a, t2 = b, l = 0, r=0, s = 1;
        while(1){
            int c = 0;
            if(t1 - s >= 0){
                t1-=s;
                s *= 2;
                l++;
                c++;
            }
            if(c==0) break;
            if(t2 - s >= 0){
                t2 -= s;
                s*=2;
                l++;
            }
            //cout << "  a: " << t1 << "  b: " << t2 << "layer: "<< l << endl;
        }
        s = 1;
        t1 = a, t2 = b;
        while(1){
            int c = 0;
            if(t2 - s >= 0){
                t2-=s;
                s *= 2;
                r++;
            }
            if(t1 - s >= 0){
                t1 -= s;
                s*=2;
                r++;
                c++;
            }
            //cout << "  a: " << t1 << "  b: " << t2 << "layer: "<< r << endl;
            if(c == 0) break;
        }
        cout << max(l, r) << endl;
    }
    return 0;
}