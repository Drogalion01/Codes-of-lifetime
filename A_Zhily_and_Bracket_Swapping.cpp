#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    stack <int> idx1, idx2;

    bool flag = true;

    for(int i = 0; i < n; i++){
        if(a[i] == '(') idx1.push(i);
        else if(!idx1.empty()) idx1.pop();
    }  

    while(!idx1.empty()){
        int tmp = idx1.top();
        idx1.pop();
        swap(a[tmp], b[tmp]);
    }

    for(int i = 0; i < n; i++){
        if(b[i] == '(') idx2.push(i);
        else if(!idx2.empty()) idx2.pop();
    }
    while(!idx2.empty()){
        int tmp = idx2.top();
        idx2.pop();
        swap(a[tmp], b[tmp]);
    }

    int c1 = 0, c2 = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == '(') c1++;
        if(a[i] == ')') c1--;
        if(a[i] == ')' && c1 < 0) flag = false;
        if(b[i] == '(') c2++;
        if(b[i] == ')') c2--;
        if(b[i] == ')' && c2 < 0) flag = false;
    }

    if(c1 != 0 || c2 != 0) flag = false;
    
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_case;
    cin >> test_case;
    while(test_case--){
        solve();
    }
    return 0;
}