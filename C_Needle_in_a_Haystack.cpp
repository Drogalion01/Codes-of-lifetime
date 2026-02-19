#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s, t;
    cin >> s >> t;
    string fi(t.size(), ' ');
    sort (t.begin(), t.end());
    // cout << t << endl;
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
    int k = 0;
    bool check = false;
    for(int i = 0; i < fi.size(); i++){
        for(int j = 0; j < 26; j++){
            char tmp = (char) j+97;  
            // cout << "c: " << tmp << " " << alpt[j] << " " << alps[j] << " "<< s[k] << endl;     
            if(alpt[j] && alpt[j] > alps[j] ){
                fi[i] = tmp;
                alpt[j]--;
                if(tmp == s[k] && k < s.size()){
                    alps[j]--;
                    k++;
                }
                break;
            }
            
            if(alpt[j] && alpt[j] == alps[j] && k < s.size() && s[k] <= tmp){
                    fi[i] = s[k];
                    alpt[j]--;
                    alps[j]--;
                    k++;
                    // check = true;
                    break;
            }
            
            // if(i==fi.size()-1) break;
        }
        // if(i && !check) i--;
        // cout << fi << endl;
    }
    cout << fi << endl;
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