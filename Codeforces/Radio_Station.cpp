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
    int n, m;
    cin >> n >> m;
    map<string, string> ips;
    while(n--){
        string name, ip;
        cin >> name >> ip;
        ips[ip] = name;
    }
    while(m--){
        string com, ip;
        cin >> com >> ip;
        ip = ip.substr(0, ip.size()-1);
        cout << com << " " << ip << "; #" << ips[ip] << endl;
    }
    return 0;
}