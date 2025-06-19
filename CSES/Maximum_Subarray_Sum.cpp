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

const int mx = 2e5 + 123;
ll arr[mx];

int main(){
    fasty;
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    ll maxSum = arr[1];
    ll preSum = arr[1];
    for(int i=2; i<=n; i++){
        preSum = max(arr[i], arr[i] + preSum);
        maxSum = max(maxSum, preSum);
    }
    cout << maxSum << endl;

    return 0;
}