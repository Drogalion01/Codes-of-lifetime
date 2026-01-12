#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    vector <int> shop(n);
    for(auto& x : shop) cin >> x;
    cin >> m;
    vector<long long> coin(m);
    vector <long long> d(m, 0);
    for(auto& x : coin) cin >> x;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(coin[i] >= shop[j]) d[i]++;
        }
    }
    for(int i = 0; i < m; i++) cout << d[i] << endl;
}