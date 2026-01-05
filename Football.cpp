#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    if(n > (a + b))
    {
        cout << n - (a + b) << endl;
        for(int i = 0; i < n - (a + b); i++) cout << "0:0" << endl;
        for(int i = 0; i < a; i++) cout << "1:0" << endl;
        for(int i = 0; i < b; i++) cout << "0:1" << endl;
    }

    else if(n == 1 && a==b) cout << "1" << endl << a << ":" << a << endl;
    
    else
    {
        cout << "0" << endl;

        if (n == 1) cout << a << ":" << b << endl;
        
        else if (n == (a+b))
        {
            for(int i = 0; i < a; i++) cout << "1:0" << endl;
            for(int i = 0; i < b; i++) cout << "0:1" << endl;
        }
        else
        {
            vector <int> arra(n, 0);
            vector <int> arrb(n, 0);
            arra[0] = a, arrb[0] = b;
            for(int i = 1; i<n; i++)
            {
                if(arra[0]>0)
                {
                          arra[0]--;
                          arra[i]++;
                }
                if(arrb[0]>0 && i > a)
                {
                          arrb[0]--;
                          arrb[i]++;
                }
            }
            if(arra[0] == arrb[0])
            {
                arra[0]--;
                arra[n-1]++;
            }
            for (int i = 0; i<n; i++) cout << arra[i] << ":" << arrb[i] << endl;
        }
    }
}