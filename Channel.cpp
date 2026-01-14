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
        /*if(n <= a) cout << "YES" << endl;
        else {
            int pos = 0, t1 =  a, myb, yes, mx;
            vector <int> temp(n, 0);
            for (int i = 0; i < (int)ntf.length() && ntf[i] != '-'; i++){
                if (ntf[i] == '+') t1++;
                pos = i + 1;
            }
            if(t1 >= n) cout << "YES" << endl;
            else {
                mx = myb = yes = t1;
                //for(int i = 0; i < t1; i++) temp [i] += 2;
                for(int i = pos; i < (int)ntf.length(); i++){
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
        }*/
        
    }
}