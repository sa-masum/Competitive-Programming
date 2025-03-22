#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int K, G, M;
    cin >> K >> G >> M;
    int gfill = 0, mfill = 0;
    while(K--){
        if(gfill == G){
            gfill = 0;
        }else if(mfill == 0){
            mfill = M;
        }else{
            if((G-gfill) >= mfill){
                gfill += mfill;
                mfill = 0;
            }else{
                mfill -= (G-gfill);
                gfill = G;
            }
        }
    }
    cout << gfill << " " << mfill << endl;
return 0;
}