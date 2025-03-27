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
    while(t--){
        int n;
        cin >> n;
        int a[n];
        map<int, int> check;
        int ans = -1;
        for(int i=0; i<n; i++){
            cin >> a[i];
            check[a[i]]++;
            if((check[0] >= 3) && (check[1] >= 1) && (check[3] >= 1) && (check[2] >= 2) && (check[5] >= 1) && (ans == -1)){
                ans = i;
            }
        }
        cout << (ans+1) << endl;
    }
    return 0;
}