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

vector<int> coins;
int dp[100005];

int isPossible(int n){
    if( n < 0 ) return 0;
    if( n == 0 ) return 1;
    if(dp[n] == 1) return 1;

    int res = 0;
    for(int coin : coins){
        if(isPossible(n-coin)) {
            res = 1;
            break;
        }
    }
    return res;
}


int main(){
    fasty;
    fill(dp, dp+10005, -1);
    
    // Taking input of coin
    int m;
    cin >> m;
    for(int i=0; i < m; i++){
        int x;
        cin >> x;
        coins.pb(x);
    }

    // Take a number
    int n;
    cin >> n;

    if(isPossible(n)) cout << "Possible" << endl;
    else cout << "Not Possible" << endl;
    
    return 0;
}