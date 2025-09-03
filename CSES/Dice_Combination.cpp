#include <bits/stdc++.h>
using namespace std;

int vis[1000006], dp[1000006];

int solve(int sum){
    if(sum == 0) return 1;

    if(vis[sum]) return dp[sum];

    int res = 0;
    for(int i=1; i<=6; i++){
        if(sum>=i){
            res += solve(sum-i);
            res %= 1000000007;
        }
    }
    vis[sum] = 1;
    dp[sum] = res;
    return res;
}

int main(){
    int n;
    cin >> n;
    int ans = solve(n);
    cout << ans << "\n";
}