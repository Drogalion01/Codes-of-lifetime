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
        for(int i = n - (a + b); i < n - b; i++) cout << "1:0" << endl;
        for(int i = n - b; i < n; i++) cout << "0:1" << endl;
    }

    else if(n == 1 && a==b)
        cout << "1" << endl << a << ":" << a << endl;
}