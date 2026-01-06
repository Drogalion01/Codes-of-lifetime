#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector <int> a(m);
    while (n>0)
    {
        for(int j = 0; j < m; j++)
        {
            if(n > 0)
            {
                a[j]++;
                n--;}
            else
                break;
        }
    }
    for(int i=0; i<m; i++) cout << a[i] << endl;
}