#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s, t;
    cin >> s >> t;
    string fi(t.size(), ' ');
    sort (t.begin(), t.end());
    cout << t << endl;
    vector<int>alps(26, 0), alpt(26, 0);
    for(int i = 0; i < s.size(); i++){
        alps[s[i]-97]++;
    }
    for(int i = 0; i < t.size(); i++){
        alpt[t[i]-97]++;
    }
    for(int i = 0; i < 26; i++){
        if(alps[i] > 0 && alps[i] > alpt[i]){
            cout << "Impossible" << endl;
            return;
        }
    }
    int j = 0, k = 0;
    for(int i = 0; i < fi.size(); i++){
        // cout << "t1 :" << alpt[t[i+k]-97] << " " << alps[t[i+k]-97]  << " ";   
        if(j < s.size() && i+k < t.size() && t[i+k] < s[j] && alpt[t[i+k]-97] > alps[t[i+k]-97]){
            fi[i] = t[i+k];
            alpt[t[i+k]-97]--;
        }
        else if (j < s.size() && i+k < t.size() && t[i+k] == s[j]) {
            fi[i] = t[i+k];
            alpt[t[i+k]-97]--;
            alps[s[j]-97]--;
            j++;
        }
        else if(j < s.size() && (i+k >= t.size() || t[i+k] > s[j])){
            fi[i] = s[j];
            alpt[s[j]-97]--;
            alps[s[j]-97]--;
            j++;
            k--;
        }
        else if(j >= s.size()){
            fi[i] = t[i];
        }
        else
        {
            k = alpt[t[i+k]-97] + 1;

                fi[i] = t[i+k];
                alpt[fi[i]-97]--;
                if (j < s.size() && t[i+k] == s[j]) {
                    alps[s[j]-97]--;
                    j++;
            }
        }
        // cout << "k :" << k  << " ";    
    }
    // cout << endl;
    // cout << fi << endl;
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