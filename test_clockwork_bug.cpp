
#include<bits/stdc++.h>
using namespace std;

string solve(int n, vector<int> a){
    // Simulate the user's logic
    vector<pair<int,int>> tmp(n);
    for(int i = 0; i < n; i++){
        tmp[i].first = a[i];
        tmp[i].second = i+1;
    }
    sort(tmp.begin(), tmp.end());
    
    // The buggy loop
    for(int i = 0; i < n; i++){
        // Logic from user code: checks tmp[n-1] relative to its specific index
        if(tmp[n-1].first <= (tmp[n-1].second - 1)*2 || tmp[n-1].first <= (n-tmp[n-1].second)*2) {
            return "NO";
        }
    }
    return "YES";
}

string solve_correct(int n, vector<int> a) {
    for (int i = 0; i < n; i++) {
        if (a[i] <= 2 * i || a[i] <= 2 * (n - 1 - i)) {
            return "NO";
        }
    }
    return "YES";
}

int main(){
    // Case where max element is fine, but small element fails
    // Indices: 0 1 2
    // Distances from ends for i=1 (middle): 1, 1. 2*d = 2.
    // Logic: need > 2*i AND > 2*(n-1-i)
    // For i=1: need > 2*1=2 and > 2*1=2. So a[1] > 2.
    // If a[1] = 1, it should fail.
    // Max element large (100).
    vector<int> t1 = {100, 1, 100}; 
    cout << "Test Case {100, 1, 100}:" << endl;
    cout << "User Logic: " << solve(3, t1) << endl;
    cout << "Correct Logic: " << solve_correct(3, t1) << endl;

    return 0;
}
