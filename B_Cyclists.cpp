#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k, p, m;
    cin >> n >> k >> p >> m;

    vector<int> a(n);
    for(auto& x : a) {
        cin >> x;
    }

    vector<pair<int, bool>> deck;
    deck.reserve(n);
    for(int i = 0; i < n; i++){
        deck.push_back({a[i], i == p - 1});
    }

    int ans = 0;
    while(true){
        int limit = min(k, (int)deck.size());
        int chosen = -1;
        int bestCost = INT_MAX;

        for(int i = 0; i < limit; i++){
            if(deck[i].second){
                chosen = i;
                break;
            }
            if(deck[i].first < bestCost){
                bestCost = deck[i].first;
                chosen = i;
            }
        }

        if(chosen == -1 || deck[chosen].first > m){
            break;
        }

        m -= deck[chosen].first;
        if(deck[chosen].second){
            ans++;
        }

        vector<pair<int, bool>> nextDeck;
        nextDeck.reserve(n);
        for(int i = 0; i < chosen; i++){
            nextDeck.push_back(deck[i]);
        }
        for(int i = chosen + 1; i < (int)deck.size(); i++){
            nextDeck.push_back(deck[i]);
        }
        nextDeck.push_back(deck[chosen]);
        deck.swap(nextDeck);
    }

    cout << ans << '\n';
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