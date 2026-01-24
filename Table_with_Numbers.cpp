#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_case;
    cin >> test_case;
    while(test_case--){
        int n, h, l;
        cin >> n >> h >> l;
        int a[h][l]={};
        int temp = h*l;
        cout << min((int)n/2, temp) << endl;
    }
    return 0;
}