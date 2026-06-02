#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, a, b;
    cin >> n >> a >> b;

    int Art[a], Alex[b], cnt[n];
    
    for(int i = 0; i < a; i++) cin >> Art[i];
    for(int i = 0; i < b; i++) cin >> Alex[i];

    sort (Art, Art + a);
    sort (Alex, Alex + b);
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(Art[j] == i+1 && j < a) cnt[i] = 1;
            else if(Alex[j] == i+1 && j < b) cnt[i] = 2;
        }
    }
    
    for(int i=0; i<n; i++) cout << cnt[i] << " ";
    cout << endl;
}