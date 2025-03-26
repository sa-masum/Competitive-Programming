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
    int Q;
    cin >> Q;
    set<int> nums;
    for(int i=0; i<Q; i++){
        int y, x;
        cin >> y >> x;
        if(y == 1){
            nums.insert(x);
        }else if(y == 2){
            nums.erase(x);
        }else if(y == 3){
            if(nums.count(x)){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}