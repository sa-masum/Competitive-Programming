#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int yes = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if((a[i] <= (i+1)) && !yes){
                yes = 1;
            }
        }

        if(yes){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
return 0;
}