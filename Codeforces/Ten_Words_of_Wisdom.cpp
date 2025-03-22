#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n];
        int pos = -1, max = 0;
        for(int i=0; i<n; i++){
            cin >> a[i] >> b[i];
            if(a[i] <= 10 && max < b[i]){
                max = b[i];
                pos = i;
            }
        }
        cout << (pos + 1) << endl;
    }
return 0;
}