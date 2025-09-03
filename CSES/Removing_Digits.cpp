#include<bits/stdc++.h>
using namespace std;

int dp[1000005];

int removeDigits(int n){
    if(n == 0) return 0;
    int step = INT_MAX;
    int temp = n;
    if(dp[n] != 0) return dp[n];
    while(temp != 0){
        int digit = temp % 10;
        temp = temp / 10;
        int s = INT_MAX;
        if(digit != 0) s = removeDigits(n - digit);
        step = min(step, s);
    }
    dp[n] = ++step;
    return step;
}

int main(){
    int n;
    cin >> n;
    int steps = removeDigits(n);
    cout << steps << '\n';
}