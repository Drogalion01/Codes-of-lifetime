#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector <int> a(n);
    for(auto& x : a) cin >> x;
    queue <int> child;
    vector <int> tree;
    tree.push_back(a[0]);
    child.push(a[0]);
    for(int i = 1; i < n; i++){
        int m = 0;
        while(m < pow(2, i)/2) {
            int parent = child.front();
            child.pop();
            child.push(parent + a[i]);
            child.push(parent - a[i]);
            tree.push_back(parent + a[i]);
            tree.push_back(parent - a[i]);
            m++;
        }
    } 
    for(int i = tree.size()-pow(2, n-1); i < pow(2, n) - 1; i++){
        if(tree[i] % 360 == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}