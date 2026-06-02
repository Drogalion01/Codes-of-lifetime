#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_case;
    cin >> test_case;
    while(test_case--){
        int n;
        cin >> n;
        string a;
        cin >> a;
        size_t p6 = a.find("2026"), p5 = a.find("2025");
        if (p6 != string::npos) cout << "0" << endl;
        else if (p5 != string::npos) cout << "1" << endl;
        else cout << "0" << endl;
    }
    return 0;
}