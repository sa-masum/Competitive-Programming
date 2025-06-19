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
int arr[mx];
ll preSum[mx];


int main(){
    fasty;
    int n, q;
    cin >> n >> q;
    for(int i=1; i<=n; i++){
        cin >> arr[i];
        preSum[i] = preSum[i-1] + arr[i];
    }

    while(q--){
        int a, b;
        cin >> a >> b;
        cout << (preSum[b] - preSum[a-1]) << endl;
    }

    return 0;
}