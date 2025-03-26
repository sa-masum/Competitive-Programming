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
    int N;
    cin >> N;
    vector<int> a(N);
    map<int, int> count;
    for(int i=0; i<N; i++){
        cin >> a[i];
        count[a[i]]++;
    }
    int removes = 0;
    for(auto m : count){
        if(m.first > m.second){
            removes += m.second;
        }else if(m.first < m.second){
            removes += (m.second - m.first);
        }
    }
    cout << removes << endl;
    return 0;
}