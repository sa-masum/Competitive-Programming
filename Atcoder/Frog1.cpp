#include <bits/stdc++.h>
using namespace std;

int vis[100006], dp[100006];
int n, h[100005];

int cost(int src, int des){
    if(src > des) return INT_MAX;
    if(src == des) return 0;
    if(src == des-1) return abs(h[des] - h[src]);
    if(vis[src] == 1) return dp[src];
    int costt = INT_MAX;
    if(des <= n){
        int c1 = abs(h[src] - h[src+1]) + cost(src+1, des);
        int c2 = abs(h[src] - h[src+2]) + cost(src+2, des);
        if(c1 < c2){
            costt = c1;
        }else{
            costt = c2;
        }
    }
    vis[src] = 1;
    dp[src] = costt;
    return costt;
}

int solve(){
    int res = cost(1, n);
    return res;
}

int main(){
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> h[i];
    }
    int res = solve();
    cout << res << '\n';
}