#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_case;
    cin >> test_case;
    while(test_case--){
        int n, a, q, myb, yes, mx;
        cin >> n >> a >> q;
        myb = yes = mx = a;
        string ntf;
        cin >> ntf;
        for(int i = 0; i < ntf.length(); i++){
                if(ntf[i] == '-') {
                    yes--;
                } 
                else {
                    myb++;
                    yes ++;
                    mx = max(yes, mx);
                }
        }
        if(mx >= n) cout << "YES" << endl;
        else if (myb >= n) cout << "MAYBE" << endl;
        else cout << "NO" << endl;
    }
}