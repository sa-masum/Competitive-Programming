#include <bits/stdc++.h>
using namespace std;

int vis[100006], dp[100006];
int n, k, h[100005];

int cost(int src, int des){
    int costt = INT_MAX, c = INT_MAX;
    if(src > des) costt = INT_MAX;
    else if(vis[src] == 1) return dp[src];
    else if(src == des) costt = 0;
    else if(src == des-1) costt = abs(h[des] - h[src]);
    else if(des <= n){
        for(int i=1; i<=k; i++){
              if(src <= n && (src+i) <= n){
                int a = abs(h[src] - h[src+i]);
                int t = cost(src+i, des);
                if(a == INT_MAX || t == INT_MAX) c = INT_MAX;
                else c = a + t;
                costt = min (c, costt);
              }
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
    cin >> n >> k;
    for(int i=1; i<=n; i++){
        cin >> h[i];
    }
    int res = solve();
    cout << res << '\n';
}