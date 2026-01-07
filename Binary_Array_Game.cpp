#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        int n;
        cin >> n;
        vector <int> a(n);
        int one=0,zero=0;
        for (int j = 0; j<n; j++) 
        {
            cin >> a[j];
            if (a[j] == 1) one++;
            else zero++;
        }

        if (one == n) cout << "Alice" << endl;
        else if (zero == n) cout << "Bob" << endl;
        else if (a[0] == a[n-1] && a[0] == 0) cout << "Bob" << endl;
        else if (a[0] == 1 || a[n-1] == 1) cout << "Alice" << endl;
    }

}