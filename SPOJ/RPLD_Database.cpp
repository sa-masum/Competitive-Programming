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

int main(){
    fasty;
    int T;
    cin >> T;
    for(int i=0; i<T; i++){
        int N, R;
        cin >> N >> R;
        map<pair<int, int>, bool> dup;
        bool flag = 0;
        while(R--){
            int I, C;
            cin >> I >> C;
            if(dup[{I, C}] == 0){
                dup[{I, C}] = 1;
            }else{
                flag = 1;
            }
        }
        cout << "Scenario #" << (i+1) << ": " << ((flag)?"impossible":"possible") << endl;
    }
    return 0;
}