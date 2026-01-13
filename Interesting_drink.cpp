#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
 
    cin >> n;
    vector <int> shop(n);
    for(auto& x : shop) cin >> x;
    sort (shop.begin(), shop.end());
    int mx = *max_element(shop.begin(), shop.end());
    vector <int> v(100000, 0);
    for(int i = 0; i < n; i++) v[shop[i]-1] ++;

    vector <int> p(100001, 0);
    for(int i = 1; i <= 100000; i++) p[i] = p[i-1] + v[i-1];

    cin >> m;
    vector<long long> coin(m);
    for(auto& x : coin) cin >> x;
    vector<long long> d(m, 0);
    for(int i = 0; i < m; i++){
        if(coin[i] >= mx) d[i] = n;
        else {
            int temp = coin[i];
            d[i] = p[min (temp, 100000)] - p[0];
        }
    }
    for(int i = 0; i < m; i++) cout << d[i] << endl;
}