#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        long long n, m, k;
        cin >> n >> m >> k;
        long long left = k-1, right = n-k;
        //if(left < right) swap(left,right);
        
        if(n==1) cout << "1" << endl;
        long long l = 0, r = 0;
        while (1)
        {
            int c = 0;
            if (l < left && l + r + max(l+1, r) <= m) 
            {
                l++;
                c++;
            }
            if (r < right && l + r + max(l, r+1) <= m)
            {
                r++;
                c++;
            }
            if (c == 0)
                break;

        }
        cout << l+r+1 << endl;
        //cout << "test: " << i << endl;
    }

}