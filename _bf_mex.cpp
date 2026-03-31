#include <bits/stdc++.h>
using namespace std;

int mexv(const vector<int>& a){
    unordered_set<int> s(a.begin(), a.end());
    int x=0; while(s.count(x)) x++; return x;
}

struct VecHash{ size_t operator()(vector<int> const& v) const noexcept { size_t h=0; for(int x:v) h = h*239017 + x + 1000003; return h; } };

int solve_bruteforce(vector<int> a, int k, unordered_map<vector<int>, int, VecHash>& memo){
    if((int)a.size()==k-1) return mexv(a);
    auto it = memo.find(a); if(it!=memo.end()) return it->second;
    int m=a.size();
    int mx=-1;
    vector<int> w(m-k+1);
    for(int i=0;i<=m-k;i++){
        vector<int> sub(a.begin()+i, a.begin()+i+k);
        w[i]=mexv(sub);
        mx=max(mx,w[i]);
    }
    int ans=-1;
    for(int i=0;i<=m-k;i++) if(w[i]==mx){
        for(int idx=i; idx<i+k; idx++){
            vector<int> b=a;
            b.erase(b.begin()+idx);
            ans=max(ans, solve_bruteforce(b,k,memo));
        }
    }
    memo[a]=ans;
    return ans;
}

int main(){
    for(int n=2;n<=9;n++){
        for(int k=2;k<=n;k++){
            vector<int> a(n);
            long long total=1;
            for(int i=0;i<n;i++) total*= (n+1);
            for(long long mask=0; mask<total; mask++){
                long long t=mask;
                for(int i=0;i<n;i++){ a[i]=t%(n+1); t/=(n+1); }
                unordered_map<vector<int>, int, VecHash> memo;
                int brute=solve_bruteforce(a,k,memo);
                unordered_set<int> s(a.begin(), a.end());
                int m=0; while(s.count(m)) m++;
                int f=min(k-1,m);
                if(brute!=f){
                    cout<<"counterexample n="<<n<<" k="<<k<<" arr=";
                    for(int x:a) cout<<x<<' ';
                    cout<<" brute="<<brute<<" formula="<<f<<"\n";
                    return 0;
                }
            }
        }
    }
    cout<<"no counterexample up to n=9"<<"\n";
}
