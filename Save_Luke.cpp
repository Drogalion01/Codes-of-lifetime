#include<bits/stdc++.h>
using namespace std;

int main()
{
    long double d, l, v1, v2;
    cin >> d >> l >> v1 >> v2;

    long double time = (l - d)/ (v1 + v2);
    cout << fixed << setprecision(20) << time << endl;
}