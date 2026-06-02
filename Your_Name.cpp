#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_case;
    cin >> test_case;
    while(test_case--){
        int n, c=0;
        cin >> n;
        vector <int> alph(26, 0);
        vector <int> test(26, 0);
        string q, t;
        cin >> q >> t;
        for(int i = 0; i < n; i++){
            alph[q[i]-97]++;
        }
        for(int i = 0; i < n; i++){
            test[t[i]-97]++;
        }
        for(int i = 0; i < 26; i++){
            if(alph[i]!=test[i])
            {
                c++;
                cout << "NO" << endl;
                break;
            }
        }
        if (c==0) cout << "YES" << endl;
    }
    return 0;
}