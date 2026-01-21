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
        long t1 = a, t2 = b, l = 0, r = 0;
        while (1)
        {
            int c = 0;
            if(t1 - max(1L, (long)pow(2,l)) >= 0) {
                t1-=max(1L, (long)pow(2,l));
                l++;
                c++;
            }
            if(t2 - max(1L, (long)pow(2,l)) >= 0)
            {  
                if(c!=0){
                    t2 -= max(1L, (long)pow(2,l));
                    l++;
                    c++;
                }
                else
                {
                    l++;
                    break;
                }

            }
            if (c==0) break;
        }
        t1 = b, t2 = a;
        while (1)
        {
            int c = 0;
            if(t1 - max(1L, (long)pow(2,r)) >= 0) {
                t1-=max(1L, (long)pow(2,r));
                r++;
                c++;
            }
            if(t2 - max(1L, (long)pow(2,r)) >= 0)
            {  
                t2 -= max(1L, (long)pow(2,r));
                r++;
                c++;
            }
            if (c==0) break;
        }
        cout << max(l,r) << endl;
    }
    return 0;
}