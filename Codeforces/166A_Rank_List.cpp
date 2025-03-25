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

template<typename T>
using pr = pair<T, T>;

template<typename T1, typename T2>
using prd = pair<T1, T2>;

template<typename T1, typename T2>
using vecp = vector<prd<T1, T2>>;

bool cmp(const pr<int> &p1, const pr<int> &p2){
    if(p1.first > p2.first){
        return 1;
    }else if(p1.first == p2.first){
        return (p1.second < p2.second);
    }else{
        return 0;
    }
}

int main(){
    fasty;
    int n, k, count=0;
    cin >> n >> k;
    vecp<int, int> pt(n);
    for(int i=0; i<n; i++){
        cin >> pt[i].first >> pt[i].second;
    }
    sort(pt.begin(), pt.end(), cmp);
    
    for(auto u : pt){
        if(u == pt[k-1]){
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
