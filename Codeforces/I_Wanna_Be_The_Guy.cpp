#include<bits/stdc++.h>
using namespace std;

#define fasty ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
#define pb push_back
#define ll long long
#define ld long double

template<typename T>
using vec = vector<T>;

template<typename T1, typename T2>
using pv = pair<vector<T1>, vector<T2>>;

template<typename T1, typename T2>
using pr = pair<T1, T2>;

template<typename T1, typename T2>
using vecp = vector<pr<T1, T2>>;

int main(){
    fasty;
    int n;
    cin >> n;
    int p;
    cin >> p;
    set<int> lvl;
    for(int i=0; i<p; i++){
        int x;
        cin >> x;
        lvl.insert(x);
    }
    int q;
    cin >> q;
    for(int i=0; i<q; i++){
        int x;
        cin >> x;
        lvl.insert(x);
    }
    if(lvl.size() == n) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;
    return 0;
}