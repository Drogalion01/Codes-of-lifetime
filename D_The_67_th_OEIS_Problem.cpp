#include<bits/stdc++.h>
using namespace std;

long long primeLimit(int n){
    if(n < 6) return 15;

    long double x = n;
    long double y = x * (log(x) + log(log(x))) + 10.0L;
    y += 0.25L * x;

    if(y > (long double)(LLONG_MAX / 2)) return LLONG_MAX / 2;
    return (long long)ceill(y);
}

vector<int> generateNPrimes(long long n){
    if(n <= 0) return {};
    if(n == 1) return {2};

    long long lim = primeLimit(n);

    while(true){
        if(lim < 3) lim = 3;

        // comp[i] tells whether (2*i + 1) is composite.
        vector<bool> comp((lim >> 1) + 1, false);
        long long r = (long long)sqrtl((long double)lim);

        for(long long p = 3; p <= r; p += 2){
            if(!comp[p >> 1]){
                for(long long j = p * p; j <= lim; j += (p << 1)){
                    comp[j >> 1] = true;
                }
            }
        }

        vector<int> v;
        v.reserve(n);
        v.push_back(2);

        for(long long x = 3; x <= lim && (int)v.size() < n; x += 2){
            if(!comp[x >> 1]){
                v.push_back((int)x);
            }
        }

        if((int)v.size() == n) return v;

        if(lim > (long long)INT_MAX - 10){
            throw runtime_error("Requested n is too large for vector<int> prime values in this implementation.");
        }

        lim *= 2;
    }
}

void solve(){
    long long n;
    cin >> n;
    vector<int> p = generateNPrimes(n + 1);
    for(int i = 0; i < p.size()-1; i++){
        cout << 1LL * p[i] * p[i + 1] << " ";
    }
    cout << endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_case;
    cin >> test_case;
    while(test_case--){
        solve();
    }
    return 0;
}