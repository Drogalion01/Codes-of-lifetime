#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_case;
    cin >> test_case;
    while(test_case--){
        int l, a, b;
        cin >> l >> a >> b;
        int mx = a, temp = a, i = 0;
        while (temp != a || i == 0){
            i++;
            temp = (a + i*b) % l;
            mx = max(mx, temp);
        }
        cout << mx << endl;
    }
    return 0;
}