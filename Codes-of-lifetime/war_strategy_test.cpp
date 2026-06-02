#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector <long long> a(100000);
    for (long long i=0; i < 100000; i++) a[i] = ((i+1)*(i+2)/2);

    for (int i=0; i<t; i++)
    {
        long long n, m, k;
        cin >> n >> m >> k;
        long long left = k-1, right = n-k, temp = 0, c = 0;
        if(n==1) cout << "1" << endl;
        else if (m == 1) cout << "2" << endl;
        else if (left == 0 || right == 0)
        {
            if(left == 0)
            {
                if (m >= 2*right - 1)  cout << n << endl;
                else cout << ((m + 1)/2) + 1 << endl;
            }
            else 
            {
                if (m >= 2*left - 1)  cout << n << endl;
                else cout << ((m + 1)/2) + 1 << endl;
            }
        }
        else if (left > right)
        {
            for(long long j = 0; j < right; j++) 
            {
                if (m <= 2*a[j] && j > 0)
                {
                    if(m >= 2*a[j-1]+a[j]) cout << 2*temp + 1 << endl;
                    else cout << 2*temp + 2 << endl;
                    c++;
                    break;
                }
                else temp++;
            }
            if(c == 0)
            {
                temp *= 2;
                for(long long j = right; j < left; j++) 
                {
                    if (m <= a[j])
                    {
                        cout << temp + 1 << endl;
                        c++;
                        break;
                    }
                    else temp++;
                }
            }
            if(c == 0) cout << m << endl;
        }
        else if (left < right)
        {
            for(long long j = 0; j < left; j++) 
            {
                if (m <= 2*a[j] && j > 0)
                {
                    if(m >= 2*a[j-1]+a[j]) cout << 2*temp + 1 << endl;
                    else cout << 2*temp + 2 << endl;
                    c++;
                    break;
                }
                else temp++;
            }
            if(c == 0)
            {
                temp *= 2;
                for(long long j = left; j < right; j++) 
                {
                    if (m <= a[j])
                    {
                        cout << temp + 1 << endl;
                        c++;
                        break;
                    }
                    else temp++;
                }
            }
            if(c == 0) cout << m << endl;
        }
        else 
        {
            for(long long j = 0; j < left; j++) 
            {
                if (m <= 2*a[j] && j > 0)
                {
                    if(m >= 2*a[j-1]+a[j]) cout << 2*temp + 1 << endl;
                    else cout << 2*temp + 2 << endl;
                    c++;
                    break;
                }
                else temp++;
            }
            if(c == 0) cout << n << endl;
        }
        //cout << "test: " << i << endl;
    }

}
