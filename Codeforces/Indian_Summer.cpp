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
    int t;
    cin >> t;
    vecp<string, string> flowers;
    while(t--){
        string a, b;
        cin >> a >> b;
        flowers.pb({a, b});
    }
    sort(flowers.begin(), flowers.end());
    int Sz = unique( flowers.begin(), flowers.end() ) - flowers.begin();
    cout << Sz << endl;
    return 0;
}