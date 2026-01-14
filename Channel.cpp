#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_case;
    cin >> test_case;
    while(test_case--){
        int n, a, q;
        cin >> n >> a >> q;
        string ntf;
        cin >> ntf;
        if(n <= a) cout << "Yes" << endl;
        else {
            int pos = 0, t1 =  a, myb, yes, mx;
            vector <int> temp(n, 0);
            for (int i = 0; i < (int)ntf.length() && ntf[i] != '-'; i++){
                if (ntf[i] == '+') t1++;
                pos = i + 1;
            }
            if(t1 >= n) cout << "Yes" << endl;
            else {
                mx = myb = yes = t1;
                /*for(int i = 0; i < t1; i++) temp [i] += 2;*/
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
                if(mx >= n) cout << "Yes" << endl;
                else if (myb >= n) cout << "Maybe" << endl;
                else cout << "No" << endl;
            }
        }
        
    }
}