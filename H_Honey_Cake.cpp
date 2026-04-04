#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long w, h, d, n;
    cin >> w >> h >> d >> n;
    if((w*h*d)%n) {
        cout << "-1" << endl;
        return 0;
    }
    vector<int>tmp;
    for(int i = 2; i*i <= n; i++){
        if(n%i==0) tmp.push_back(i);
    }

    vector <vector<int>> a(1, vector<int>(3));
    
    bool skip = false;

    if(tmp.size() == 1) skip = true;

    bool fi = false;
    for(int i = 0, k = 0; i < tmp.size(); i++, k++){
        if(i) a.push_back(vector<int>(3));
        fi = false;
        a[k][0] = tmp[i];
        int rem = n / tmp[i];
        for(int j = 0; j < tmp.size(); j++){
            if(j!=i && rem%tmp[j] == 0) {
                if(fi){
                    a.push_back(vector<int>(3));
                    k++;
                    a[k][0] = tmp[i];
                }
                a[k][1] = tmp[j];
                a[k][2] = rem/tmp[j];
                fi = true;
            }
        }
    }

    for(int i = a.size(), j = 0; j < tmp.size(); i++, j++){
        a.push_back(vector<int>(3));
        a[i][0] = 1;
        a[i][1] = tmp[j];
        a[i][2] = n/tmp[j];
    }
    a.push_back(vector<int>(3));
    a[a.size()-1][0] = n;
    a[a.size()-1][1] = 1;
    a[a.size()-1][2] = 1;

    for(int i = 0; i <= 2*tmp.size(); i++){
        cout << a[i][0] << " " << a[i][1] << " " << a[i][2] << endl;
    }

    int t1 = 0, t2 = 0, t3 = 0;
    for(int i = 0; i <= 2*tmp.size(); i++){
        if(skip && i==0) continue;
        t1 = 0, t2 = 0, t3 = 0;
        if(w%a[i][0]==0) {
            t1 = a[i][0];
            if(h%a[i][1]==0) {
                t2= a[i][1];
                if(d%a[i][2]==0) {
                    t3 = a[i][2];
                    cout << t1-1 << " " << t2-1 << " " << t3-1 << endl;
                    return 0;
                }
            }
            if(d%a[i][1]==0) {
                t3 = a[i][1];
                if(h%a[i][2]==0) {
                    t2 = a[i][2];
                    cout << t1-1 << " " << t2-1 << " " << t3-1 << endl;
                    return 0;
                }
            }
        }
        t1 = 0, t2 = 0, t3 = 0;
        if(w%a[i][1]==0) {
            t1 = a[i][1];
            if(h%a[i][0]==0) {
                t2= a[i][0];
                if(d%a[i][2]==0) {
                    t3 = a[i][2];
                    cout << t1-1 << " " << t2-1 << " " << t3-1 << endl;
                    return 0;
                }
            }
            if(d%a[i][0]==0) {
                t3 = a[i][0];
                if(h%a[i][2]==0) {
                    t2 = a[i][2];
                    cout << t1-1 << " " << t2-1 << " " << t3-1 << endl;
                    return 0;
                }
            }
        }
        t1 = 0, t2 = 0, t3 = 0;
        if(w%a[i][2]==0) {
            t1 = a[i][2];
            if(h%a[i][0]==0) {
                t2= a[i][0];
                if(d%a[i][1]==0) {
                    t3 = a[i][1];
                    cout << t1-1 << " " << t2-1 << " " << t3-1 << endl;
                    return 0;
                }
            }
            if(d%a[i][0]==0) {
                t3 = a[i][0];
                if(h%a[i][1]==0) {
                    t2 = a[i][1];
                    cout << t1-1 << " " << t2-1 << " " << t3-1 << endl;
                    return 0;
                }
            }
        }
    }
    cout << "-1" << endl;
    return 0;
}