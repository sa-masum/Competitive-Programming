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

void printDigits(int n){
    if(n == 0) return;

    cout << (n%10) << endl;

    printDigits(n/10);
}


int main(){
    fasty;

    // Taking a number
    int n;
    cin >> n;
    
    printDigits(n);
    
    return 0;
}