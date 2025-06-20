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

int power(int a, int b){
    if( b == 0 ) return 1;
    if( b%2 == 0) {
        int x = power(a, b/2);
        return x * x;
    }
    else return (a * power(a, b-1));
}


int main(){
    fasty;
    
    cout << power(5, 10) << endl;
    
    return 0;
}