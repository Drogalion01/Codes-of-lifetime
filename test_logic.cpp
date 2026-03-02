
#include<bits/stdc++.h>
using namespace std;
string solve(int n, int k, string s){
    if(n==1) {
        return "NO";
    }
    else if(k == 0) { 
        // Current code logic
        for(int i = 0; i <= n/2; i++){
            if (s[i] > s[n-1-i]) {
                return "NO";
            }
        }
        return "YES";
    }
    else {
        for(int i = 0; i < n-1; i++){
            if (s[i] != s[i+1]) {
                return "YES";
            }
        }
        return "NO";
    }
}

int main(){
    // Test k=0
    cout << "n=3, k=0, s=aba -> " << solve(3, 0, "aba") << " (Expected NO for non-palindrome check, YES for palindrome check)" << endl;
    cout << "n=3, k=0, s=abc -> " << solve(3, 0, "abc") << " (Expected YES for non-palindrome check, NO for palindrome check)" << endl;
    
    // Test loop issue with k=0
    // "bca": reverse "acb". 
    // i=0: b vs a. b > a is True. Returns NO.
    // "acb": reverse "bca".
    // i=0: a vs b. a > b False.
    // i=1: c vs c. False.
    // i=2: b vs a. b > a True. Returns NO.
    cout << "n=3, k=0, s=acb -> " << solve(3, 0, "acb") << endl;

    return 0;
}
