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

int mem[10005];
int mark[10005];

int fibonacci(int n){
    if( n <= 1) return n;
   
    if(mark[n]== 1) return mem[n];

    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    fasty;
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;

    return 0;
}