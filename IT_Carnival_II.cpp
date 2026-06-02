#include<bits/stdc++.h>
using namespace std;

bool isprime(long long sq)
{
    int c = 0;
    if(sq == 1) return false;
    else if (sq == 2) return true;
    else if(sq%2==0) return false;
    else {
        for(long i = 3; i * i <= sq; i+=2)
        {
            if(sq % i == 0 ) return false;
        }
        return true;
    }
}

int main()
{
    long long n, m;
    cin >> n >> m;
    vector <long long> a(n);
    long long v[m][3];
    vector <long long> temp(n, {0});
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) {
        cin >> v[i][0] >> v[i][1];
        v[i][2] = 0;
    }
    for(int i = 0; i < n; i++)
    {
        long long sq = (long long) sqrt(a[i]);
        if(a[i] == 1 || a[i] == 2) continue;
        else if(a[i] == 4) temp[i]++;
        else if(a[i]%2==0 && a[i] != 4) continue;
        else if(a[i] == sq * sq && isprime(sq)) temp[i]++;
    }
    vector <long long> p(n + 1, 0);
    for(int i = 1; i <= n; i++) {
        p[i] = p[i-1] + temp[i-1];
    }
    for(int i = 0; i < m; i++)
    {
        v[i][2] = p[v[i][1]] - p[v[i][0] - 1];
    }
    for(int i = 0; i < m; i++) cout << v[i][2] << " ";
    cout << endl;
}