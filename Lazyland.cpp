#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n
        >> k;
    vector<pair<long, int>> jobs(n);

    for (int i = 0; i < n; i++)  cin >> jobs[i].second;

    for (int i = 0; i < n; i++)  cin >> jobs[i].first;

    vector<int> temp(k, 0);

    // for(int i=0; i<k; i++)
    //     cout << temp[i] << endl;

    for (int i = 0; i<n; i++)
    {
        for(int j=0; j<k; j++)
        {
            if(jobs[i].second==j+1) temp[j]++;
        }
    }

    // for(int i=0; i<k; i++)
    //     cout << i+1 << " " << temp[i] << endl;
    // cout << endl;

    int cntwork = 0, cnt = 0;

    for (int i = 0; i<k; i++)
    {
        if (temp[i] == 0) cntwork++;
    }

    // cout << "cntwork: " << cntwork << endl;

    sort(jobs.begin(), jobs.end());

    // for(int i=0; i<n; i++)
    //     cout << jobs[i].first << " " << jobs[i].second << endl;

    if(cntwork > 0)
    {
        for(int i = 0; i<n; i++)
        {
            if(temp[jobs[i].second - 1] > 1 && cntwork > 0)
            {
                cnt+= jobs[i].first;
                cntwork--;
                temp[jobs[i].second - 1]--;
            }

        }
    }
    cout << cnt << endl;
}