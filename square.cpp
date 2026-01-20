#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_case;
    cin >> test_case;
    while(test_case--){
        int a[4], temp, c = 0;
        for(int i = 0; i < 4; i++){
            cin >> a[i];
        }
        temp = a[0];
        for(int i = 1; i < 4; i++){
            if(temp != a[i]){
                c++;
                break;
            }
        }
        if(c!=0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}